#include <iostream>
#include <cstdlib>
 
int main()
{
	int* p1 = (int*)malloc(sizeof(int)*10);
	free(p1);


	int n = 10;
	//double* p2 = &n; // error
	double* p2 = (double*)&n; // ok
	*p2 = 3.4;


//	const int c = 10;
	const int c = n;

//	int* p3 = &c; // error
// 해당 표기법을 허용하면 c가 const int이지만 포인터로 값을 변경할 수 있기 때문

	int* p3 = (int*)&c; // ok
	
	*p3 = 20;
	std::cout << c << std::endl; 	// ??
	std::cout << *p3 << std::endl;  // ?
}

// c방식 캐스팅의 문제점
// 논리적으로 위험한 캐스팅 코드도 대부분 허용
// 위험한 캐스팅이 개발자의 실수 인지 의도된 것인지 구분하기 어렵다.

// void* -> 다른 타입(int*)로 캐스팅
// 위험 하기 보다는 프로그램 개발시 반드시 필요한 캐스팅

// int* -> 다른타입(double*)로 캐스팅
// int 주소를 double* 변수에 담는 것은 위험

// 상수 변수 주소를 비 상수를 가리키는 포인터로 캐스팅

// const int c = 10;
// int* p3 = (int*)&c; // ok
// std::cout << c << std::endl;   -> 10 	
// std::cout << *p3 << std::endl; -> 20
// 위에서는 c부분을 컴파일러에서 const 값인 10으로 교체해버림


// int n = 10;
// const int c = n;
// int* p3 = (int*)&c; // ok
// std::cout << c << std::endl;   -> 20 	
// std::cout << *p3 << std::endl; -> 20
// c는 런타임에 값을 알수 있기 때문에 런타임 때 실제 메모리 주소를 참조해서 값을 사용함