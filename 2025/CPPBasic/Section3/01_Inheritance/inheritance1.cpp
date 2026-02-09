#include <iostream>
#include <string>

class Person
{
    std::string name;
    int age;
};

class Student : public Person
{
    int id;
};

class Professor : public Person
{
    int major;    
};

int main()
{
    Student s;
    Professor p;
}

// 상속 (Inheritance)
// 기존 타입을 확장해서 새로운 타입을 설계하는 문법
// 장점 : 코드의 중복을 줄 일수 있고, upcasting, 가상함수 다형성, 인터페이스 등
//         다양한 개념을 활용해서 객체지향 설계 기술을 사용 할 수 있다.

// 대부분의 객체지향 언어가 지원 -> 언어별로 표현식이 다름

// Person : Base class(기반 클래스), Super class, Parent class
//   △
// Student : Derived class(파생 클래스), Sub class, Child class