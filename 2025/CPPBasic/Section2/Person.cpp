#include "Person.h"
// 헤더를 include를 안하면 Person이 class인지 namespace인지 모르기 때문

Person::Person(const std::string& n, int a)
{
	name = n;
	age = a;
}
void Person::setAge(int a) 
{
	 age = a;
}

// 템플릿은 반드시 헤더 파일에 멤버 함수 구현부도 있어야 한다.