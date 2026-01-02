#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int         age;

public:
//	void init()
	Person()
	{
		name = "kim";
		age = 20;
		std::cout << "Constructor" << std::endl;
	}
    // 생성자는 리턴타입을 가질 수 없다.

	~Person()
	{
		std::cout << "Destructor" << std::endl;
	}
};

int main()
{
//	Person p = {"kim", 25};
	Person p;
//	p.init();
	std::cout << "____" << std::endl;

}

// 모든 멤버 데이터가 public 영역에 있다면
// 객체 생성시 구조체 초기화 문법({}사용)으로 멤버를 초기화할 수 있다.

// 멤버 데이터가 private 영역에 있다면 구조체 초기화 문법을 사용할 수 없다.
// 멤버를 초기화 하는 멤버 함수를 제공 해야한다.
// 객체 생성시 초기화 함수를 자동으로 호출되게 할 수 없을까?

// 생성자와 소멸자
// 생성자(constructor) : "클래스이름()" 모양의 함수
//                       객체를 생성할 때 자동으로 호출되는 함수

// 소멸자(destructor)  : "~클래스이름()" 모양의 함수
//                       객체가 파과 될 때 자동으로 호출되는 함수