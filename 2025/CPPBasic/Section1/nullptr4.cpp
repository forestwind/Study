#include <iostream>

template<class F, class T>
void call(F f, T arg)  // int arg = 0
{					   // std::nullptr_t arg = nullptr
	f(arg);
}

void foo(int  a) {}
void goo(int* p) {}

int main()
{
	foo(10); // ok
	goo(0);	 // ok

	call(foo, 10); 	// foo(10). ok
//	call(goo, 0);  	// goo(0)==> goo(arg)
					// error
	call(goo, nullptr); // ok
}

// literal 0 과 변수
// void goo(int*) 일 때
// goo(0) : ok

// int arg = 0;
// goo(arg)  : error

// std::nullptr_t arg = nullptr;
// goo(arg) : ok

// 결론 : 포인터 변수를 초기화(대입) 할 때는 0을 사용하지 말고 nullptr을 사용하자
// nullptr의 타입은 std::nullptr_t 이다.