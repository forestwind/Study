#include <iostream>

//예전에 c에서 많이 사용하던 macro (이미 정의되어 있음)
//#define NULL (void*)0


/*
#ifdef __cplusplus
//	#define NULL 0
	#define NULL 0L  // long버전 foo(int)일지 foo(void*) 애매해져서 에러가 난다.
#else
	#define NULL (void*)0
#endif
*/
void foo(int   n) { std::cout << "int"   << std::endl;}
void foo(void* p) { std::cout << "void*" << std::endl;}

void goo(char* p) { std::cout << "char*" << std::endl;}

int main()
{
	foo(0);  		// foo(int)
	foo((void*)0);	// foo(void*)
//	foo(NULL);	// 

//	goo(0);    // ok
//	goo(NULL); // void* => char* 필요
			   // C 언어 : ok, C++ : error

	foo(nullptr);
	goo(nullptr);
}

// c언어 vs c++언어
// c : void* -> char* 암시적 변환 허용
// c++ : void* -> char* 암시적 변환 안됨

// 0 전달에 따라서 int가 될수 있고 void*가 될수도 있다.
// NULL이 복잡한 경우가 많다. 상황에 따라 다르게 쓰이기 때문

// NULL
// 포인터 0의 의미로 사용하기 위해 만든 매크로
// 일반적으로 C언어와 C++언어에서 다르게 정의 

// C    (void*)0 컴파일러마다 다를 수 있음
// C++  0 또는 0L 컴파일러마다 다를 수 있음
