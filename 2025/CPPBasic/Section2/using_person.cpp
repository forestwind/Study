#include <iostream>
#include <string>
// 2번 방법
#include "Person.h"

// 1번 방법
/*
class Person
{
	std::string name;
	int age;
public:
    Person(const std::string& n, int a)
    {
	    name = n;
	    age = a;
    }

    void setAge(int a) 
    {
	    age = a;
    }
};
*/

int main()
{
	Person p("lee", 20);
	p.setAge(30);
}

// 클래스를 만드는 2가지 방법
// 1. 클래스 선언에 멤버 함수의 구현을 포함하는 방법
// 2. 멤버 함수를 선언과 구현으로 분리한 후, 헤더파일(.h)과 소스파일(.cpp)로 분리해서 작성 