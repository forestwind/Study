#include <iostream>

class Rect
{
	int x, y, w, h;
	mutable int cnt = 0;
public:
	Rect(int x, int y, int w, int h)
		: x{x}, y{y}, w{w}, h{h} { } 

	int getArea() const 
	{
//		static int cnt = 0;
// 객체당 횟수가 아니라 전역적으로 카운트 된다
		++cnt;
		std::cout << cnt << std::endl;
		return w * h;
	}
};

int main()
{
	Rect r1(1,1,10,10);
	Rect r2(1,1,10,10);

	r1.getArea();
	r2.getArea();
	r2.getArea();
}

// Rect 클래스의 getArea() 멤버 함수는 객체의 상태를 변경하지 않으므로 상수 멤버 함수가 되어야 한다.
// 디버깅 등의 목적으로 객체당 getarea() 함수가 몇 번 호출 되었는지 알고 싶다.

// mutable 멤버 데이터
// 상수 멤버 함수에도 값을 변경할 수 있다.