#include <iostream>
using namespace std;

class Base
{
    int data1;
public:
    Base()         : data1(0)   { cout << "Base()"    << endl; }
    Base(int a)    : data1(a)   { cout << "Base(int)" << endl; }
    ~Base()                     { cout << "~Base()"   << endl; }
};

class Derived : public Base
{
    int data2;
public:
    Derived()       : data2(0)  { cout << "Derived()"    << endl; }
    Derived(int a)  : data2(a)  { cout << "Derived(int)" << endl; }
    ~Derived()                  { cout << "~Derived()"   << endl; }
};

int main()
{
//    Derived d;
    Derived d(5);
    
}

// 상속 관계에서 생성자/소멸자 호출의 원리
// Derived 타입의 객체 d1(또는 d2)를 생성할 때 Base의 생성자도 호출될까?
// Base 생성자도 호출된다.

// Base와 Derived의 생성자중 어느 것이 먼저 실행될까?
// Base 생성자가 먼저 실행된다.

// Derived d2(5) 의 경우 Base의 어떤 생성자가 실행될까?
// Base 생성자는 항상 인자가 없는 디폴트 생성자가 호출된다.

// 지금 상태에서 Derived() : data2(0) 시 컴파일러가 자동으로 Derived() : Base(), data2(0) 형태로 바꿔준다.
// 소멸자도  ~Derived() { //.... ~Base(); } 형태로 바꿔준다.
// 컴파일러가 기반 클래스의 생성자와 소멸자를 호출하는 코드를 생성해 주는 것

// 컴파일러가 생성해 주는 코드는 항상 기반 클래스의 디폴트 생성자를 호출
// 다른 버전의 생성자를 호출하려면 기반 클래스 다른 버전의 생성자를 호출하는 코드를 직접 작성 해야 한다.