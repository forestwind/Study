class Base
{
private:   int a;
protected: int b;
public:    int c;
};

class Derived : public Base
{
public:
    void foo()
    {
     //   a = 10; // error
        b = 10; // ok
        c = 10; // ok 
    }
};

int main()
{
    Derived derv;
   // derv.a = 10; // error
   // derv.b = 10; // error
    derv.c = 10; // ok
}

// c++ 언어가 지원하는 3개의 접근 지정자
// private   : 자신의 멤버 함수와 friend 함수에서만 접근 가능
//             파생 클래스 멤버 함수에서는 접근 안됨

// protected : 자신의 멤버 함수, friend 함수, 
//             파생 클래스 멤버 함수와 friend 함수 에서 접근가능
//             멤버가 아닌 함수에서는 접근 안됨

// public    : 모든 함수에서 접근 가능