#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

int getRectArea(const Rect& r)
{
	return (r.right - r.left) * (r.bottom - r.top);
}

void drawRect(const Rect& r)
{
	std::cout << "Draw Rect" << std::endl;
}

int main()
{
	Rect rc = {1, 1, 10, 10};

	int n = getRectArea(rc);

	drawRect(rc);
}

// 객체 지향 프로그래밍

// 핵심1. 필요한 타입을 먼저 설계하자.
// 핵심2. 상태를 나타내는 데이터와 상태를 조작하는 함수를 묶어서 타입을 설계한다.
//        데이터와 함수가 분리 되어 있으면 데이터를 항상 함수의 인자로 전달해야 한다.
//        사각형 관련 모든 함수는 인자로 Rect를 받아야 한다.

// c언어는 구조체 안에 함수를 넣을 수 없다.
// c++은 구조체 안에 함수를 넣을 수 있다.