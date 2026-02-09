#include <iostream>
using namespace std;

class Base
{
    int data1;
public:
    //Base()         : data1(0)   { }
    Base(int a)    : data1(a)   { }
    ~Base()                     { }
};

class Derived : public Base
{
    int data2;
public:
    Derived()       : Base(0) , data2(0)  { } // : Base()
    Derived(int a)  : Base(a) , data2(a)  { } // : Base()
    ~Derived()                  { }
};

int main()
{
//    Derived d;
    Derived d(5);
    
}

// 기반 클래스(Base)에 디폴트 생성자가 없다면?
// 파생 클래스의 생성자에서 기반 클래스(Base)생성자를 호출하는 코드를 반드시 작성 해야 한다.
// 기반 클래스 생성자 호출을 멤버 초기화 리스트에 가장 앞쪽에 놓는 것이 관례
// 뒤에 작성해도 에러는 아니지만, Base(0)이 먼저 실행 됨