#include <iostream>

struct Point
{
	int x;
	int y;

	Point(int a, int b)   : x{a},  y{b}   { std::cout << "Point(int, int)" << std::endl;}
	Point(const Point& p) : x{p.x},y{p.y} { std::cout << "Point(Point)"    << std::endl;}
	~Point()                              { std::cout << "~Point()" << std::endl; }
};
Point pt = {1, 2};

//Point f1()
Point& f1()
{
	return pt;

//	Point p = {1,1};
//	return p; // 절대 이렇게 하면 안됨.
}
int main()
{
	std::cout << "----------" << std::endl;
	f1();
	std::cout << "----------" << std::endl;
}

// 값 리턴과 참조 리턴
// return by value  : 리턴용 임시객체가 반환 된다.
// return by reference : 리턴용 임시객체가 생성하지 않는다.

// 주의 : 지역 변수로 만들어진 객체는 절대 참조 반환하면 안된다.