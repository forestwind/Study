#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
    // 멤버 데이터(member data)
    // 다른 객체지향 언어는 필드(field)라는 용어 사용

	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "Draw Rect" << std::endl;
	}
    // 멤버 함수(member function)
    // 다른 객체지향 언어는 메소드(method)라는 용어 사용
};

int main()
{
	Rect rc = {1, 1, 10, 10};

//	int n = getRectArea(rc);
//	drawRect(rc);

	int n = rc.getArea();
	rc.draw();
}

// 데이터와 함수를 묶어서 타입을 설계하면
// 사용법이 쉬워지고
// 다양한 객체지향 문법을 통해서 보다 안전하고, 사용하기 쉬운 타입을 설계 할 수 있다. 