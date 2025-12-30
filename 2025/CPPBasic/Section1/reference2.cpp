#include <iostream>

void inc1(int  n) { ++n;}
void inc2(int* p) { ++(*p);}
void inc3(int& r) { ++r;}

int main()
{
	int a = 10, b = 10, c = 10;

	inc1(a);  // call by value
	inc2(&b); // call by pointer
	inc3(c);  // call by reference
    // int& r = n의 경우처럼 값을 보낸다.

	std::cout << a << std::endl; // 10
	std::cout << b << std::endl; // 11
	std::cout << c << std::endl; // 11
}

// 함수 인자로 reference를 사용하면
// 포인터와 유사하게 전달된 인자의 값을 수정할 수 있다.
// 포인터 보다 간결하고 안전하게 코드를 작성할 수 있다.