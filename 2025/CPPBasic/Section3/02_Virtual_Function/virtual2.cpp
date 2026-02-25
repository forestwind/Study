#include <iostream>
#include <string>

class Animal
{
    int age;    
public:
    // static binding
    void cry1() { std::cout << "Animal cry1" << std::endl;}  // 1

    // dynamic binding
    virtual void cry2() { std::cout << "Animal cry2" << std::endl;}  // 1
};

class Dog : public Animal
{
public:
    void cry1() { std::cout << "Dog cry1" << std::endl; } // 2
    virtual void cry2() { std::cout << "Dog cry2" << std::endl; } // 2
};

int main()
{
    Animal a;
    Dog d;

    Animal* p = &d;

// if (사용자 입력값 == 1) p = &a;

    p->cry1(); // Animal cry
    p->cry2(); // Dog cry
}

// 함수 바인딩 (Function Binding)
// p->cry() 표현식을 어느 함수와 연결할지를 결정하는 과정.

// static binding(early binding)
// 컴파일러가 컴파일 시간에 함수 호출을 결정
// 컴파일러는 p가 실제로 어느 객체를 가리키는지는 컴파일 시간에 알 수 없다.
// 포인터 타입 만을 가지고 함수 호출을 결정 ("Animal cry" 호출)
// 빠르지만 논리적이지 않다. (c++,c#의 non-virtual function)


// dynamic binding(late binding)
// 컴파일 시간에는 p가 가리키는 곳을 조사하는 기계어 코드를 생성
// 실행 시간에 p가 가리키는 곳을 조사 후 실제 메모리에 있는 객체에 따라 함수 호출 결정
// Dog 객체가 있었다면 "Dog cry" 호출
// 느리지만 논리적이다. (java, python 등의 객체지향언어, c++,c#의 virtual function)

// virtual function vs non-virtual function
// virtual function : 함수 선언부에 virtual 붙은 멤버 함수 (dynamic binding)
// non-virtual function : virtual을 붙이지 않은 멤버 함수 (static binding)