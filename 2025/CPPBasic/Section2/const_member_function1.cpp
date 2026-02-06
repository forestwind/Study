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
	void print() 
	{
		std::cout << xpos << ", " << ypos << std::endl;
	}
};
int main()
{
//	Point pt(1, 2);
	const Point pt(1, 2);

//	pt.xpos = 10;   // error. public 이지만 상수이므로
//	pt.set(10, 20); // error. 
//	pt.print();     // error
}

// 함수뒤에 const가 붙으면 상수 멤버 함수(const member function)
// const Point pt(1, 2) << 상수 객체 (const object)

// print 멤버 함수는 멤버의 값을 변경하는 코드가 없는데 왜 호출할 수 없을까? 
// 컴파일러는 함수의 선언부를 보고 함수 호출 여부를 결정한다.
// 함수의 선언만으로는 멤버의 값을 변경하는지 알 수 없다.