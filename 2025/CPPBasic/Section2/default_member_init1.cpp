#include <iostream>

int g = 0;

class Point
{
public:
//	int x{0}; // int x = 0;
	int x{++g}; // 권장하지 않음(리터럴 값을 사용 권장)
	int y{0};

	Point() {}
	Point(int a)        : x{a} {}
	Point(int a, int b) : x{a}, y{b} {}
};

int main()
{
	Point pt1;     // 0, 0
	Point pt2(1);  // 1, 0

	std::cout << pt1.x << ", " << pt1.y << std::endl;
	std::cout << pt2.x << ", " << pt2.y << std::endl;

	std::cout << g << std::endl; // 1
    // pt1는 컴파일러 변경으로 point() {} -> point() : x{++g}, y{0} {}으로 되서 g가 증가하고
    // pt2는 Point(int a) : x{a} {} -> Point(int a) : x{a} y{0} {}으로 변경되기 때문에 g가 증가하지 않는다
}

// c++11 부터 멤버 데이터에 초기값을 지정할 수 있다.
// 사용자가 만든 코드를 컴파일러가 아래처럼 변경

/*
// 변경 전
class Point
{
public:
	int x{0};
	int y{0};

	Point() {}
	Point(int a)        : x{a} {}
	Point(int a, int b) : x{a}, y{b} {}
};

// 변경 후 
class Point
{
public:
	int x;
	int y;

	Point() : x{0}, y{0} {}
	Point(int a)        : x{a}, y{0} {}
	Point(int a, int b) : x{a}, y{b} {}
};

*/