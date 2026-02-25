#include <string>

class Animal
{
    std::string name;
    int age;    
public:
    void cry() {}
};

class Dog : public Animal
{
    int color;
public:
    void setColor(int c) { color = c; }
};

int main()
{
    Dog dog;
    Dog* p1 = &dog; //ok
    //int* p2 = &dog; //error
    Animal* p3 = &dog;  //ok

    p3->cry();          //ok
    //p3->setColor(5);    //error
    static_cast<Dog*>(p3)->setColor(5); //ok
}

// 1. 기반 클래스 포인터로 파생 클래스 객체를 가리킬 수 있다. "Upcasting"
// 2. 기반 클래스 포인터로는 기반 클래스의 멤버에만 접근할 수 있다.
// 3. 파생 클래스의 멤버에 접근하려면 명시적으로 캐스팅(static_cast)을 해야 한다.
