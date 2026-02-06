#include <iostream>

class Point
{
public:
	int xpos, ypos;

	Point(int x, int y) : xpos{x}, ypos{y} {}

	void set(int x, int y) 
	{
		xpos = x;
		ypos = y;
	}
	void print() const 
	{
//		xpos = 10; // error
		std::cout << xpos << ", " << ypos << std::endl;
	}
};
int main()
{
	const Point pt(1, 2);

//	pt.set(10, 20); // error

	pt.print();     // ok
}

// 상수 멤버 함수(const member function)
// 1. 멤버 함수의 괄호() 뒤쪽에 const 키워드를 붙이는 문법
//    함수를 선언과 구현으로 분리할 경우 양쪽에 모두 붙여야한다.

// 2. 상수 멤버 함수에서는 멤버의 값을 변경하지 않겠다는 약속. 
//    상수 멤버 함수 안에서는 모든 멤버는 상수로 취급된다. 멤버의 값을 변경하는 경우 컴파일 에러

// 3. 상수객체는 상수 멤버함수만 호출 할 수 있다.
