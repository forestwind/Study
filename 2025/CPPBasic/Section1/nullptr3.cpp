#include <iostream>

void foo(int)    { std::cout << "int"    << std::endl;}
void foo(double) { std::cout << "double" << std::endl;}
void foo(bool)   { std::cout << "bool"  << std::endl;}
void foo(char*)  { std::cout << "char*" << std::endl;}

int main()
{
	foo(0);   		// foo(int)
	foo(0.0); 		// foo(double)
	foo(false); 	// foo(bool)
	foo(nullptr);	// foo(char*)

	std::nullptr_t null = nullptr;

	int*  p1 = null;
	char* p2 = null;
}

// 모든 리터럴은 타입이 있다.
// 0 : 정수형 리터럴 int
// 0.0 : 실수형 리터럴 double
// false : bool 형 리터럴(키워드)  bool
// nullptr : 포인터 형 리터럴(키워드) std::nullptr_t

// std::nullptr_t
// nullptr의 타입
// 모든 종류(타입)이 포인터로 암시적 형변환 된다.