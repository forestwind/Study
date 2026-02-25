#include <iostream>
#include <string>

class Animal
{
    int age;    
public:
    void cry() { std::cout << "Animal cry" << std::endl;}  // 1
};

class Dog : public Animal
{
public:
    //override
    void cry() { std::cout << "Dog cry" << std::endl; } // 2
};

int main()
{
    Animal a; a.cry(); // 1
    Dog d; d.cry();    // 2

    Animal* p = &d;
    p->cry();          // 1
}

// overloading vs overriding

// overloading : 인자의 타입이나 개수가 다르면 동일 이름의 함수를 여러 개 만들 수 있다.
//               int square(int); , double square(double);

// overriding  : 기반 클래스 멤버 함수를 파생 클래스 다시 만드는 것

// p->cry()가 어떤 함수를 호출하는 것이 논리적으로 맞을까?
// 객체가 Dog이므로 Dog cry

// 현재 코드에서 p->cry()가 어떤 함수를 호출할까?
// Animal cry가 호출

// java나 python등의 대부분의 다른 객체지향 언어는 Dog cry 호출