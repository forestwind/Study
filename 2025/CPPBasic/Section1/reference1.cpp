#include <iostream>

int main()
{
	int  n = 10;
	
	int* p = &n;

	int& r = n;

	r = 20;

	std::cout << n << std::endl;  // 20
	std::cout << &n << std::endl; // 
	std::cout << &r << std::endl;
}

// 레퍼런스 (reference,참조)
// n과 r의 주소는 동일  
// 이미 존재하는 변수(메모리)에 대해 추가적인 별칭(alias)을 부여하는 문법

// & 연산자
// 변수의 주소를 구할때 사용
// int  n = 10;   // 변수 선언 후
// int* p = &n;   // 변수의 주소를 구할 때

// 레퍼런스 변수를 선언할 때 사용
// int& r = n;