#include <iostream>

class Base
{
public:
    Base()        { std::cout << "Base()"    << std::endl; }
    virtual ~Base()       { std::cout << "~Base()"   << std::endl; }
};

class Derived : public Base
{
public:
    Derived()    { std::cout << "Derived()"    << std::endl; }
    ~Derived()   { std::cout << "~Derived()"   << std::endl; }
};

int main()
{
    //Derived d;
    
    Base* p = new Derived;
    delete p;
    // 결과 Base() -> Derived() -> ~Base()
}


// Derived 객체를 생성했으므로 Derived 생성자 호출 (new Derived 부분)

// p가 가리키는 곳이 파괴 되므로 소멸자를 호출해야 한다 (delete p 부분)
// 그런데 p의 타입이 Base*이므로 Base의 소멸자만 호출 된다.

// 해결방법
// 소멸자 호출시 포인터 타입이 아닌 p가 가리키는 메모리를 조사 후 호출 해야 한다.
// 기반 클래스의(Base) 소멸자를 가상함수로 한다.

// 기반 클래스의 소멸자는 반드시 가상 함수가 되어야 한다.
// 단, 의도적으로 가상함수로 하지 않는 경우도 있다. (고급 기법)