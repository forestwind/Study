#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x{a}, y{b} {} 

	Point(const Point& p) : x{p.x}, y{p.y}
	{
		std::cout << "copy ctor" << std::endl;
	}
//	Point foo() { return *this; }
	Point& foo() { return *this; }
};

//void f1(Point pt) {} // Point pt = p1
void f1(const Point& pt) {}

int main()
{
	Point p1(1, 2);

	p1.foo();

//	f1(p1);

// 1번의 경우 (아래 4가지)
//	Point p2(p1);
//	Point p3 = p1;
//	Point p4{p1};
//	Point p5 = {p1};
}

// 복사 생성자가 호출되는 3가지 경우

// 1. 자신과 동일한 타입의 객체로 초기화 될 때

// 2. 객체를 call by value 로 함수에 전달할 때
//    call by reference를 사용하면 복사 생성자 호출을 제거 할 수 있다.

// 3. 함수가 return by value 로 객체를 반환할 때
//    return by reference를 사용하면 복사 생성자 호출을 제거 할 수 있다. (리턴용 임시객체 생성 안됨)
//    단, 지역변수를 반환 할 때는 참조 반환을 사용 할 수 없다.