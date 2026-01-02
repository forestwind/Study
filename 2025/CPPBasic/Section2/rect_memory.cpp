#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() {	return (right - left) * (bottom - top);	}
	void draw()   {	std::cout << "Draw Rect" << std::endl;	}
};

int main()
{
	Rect rc1 = {1, 1, 5, 5};
	Rect rc2 = {3, 3, 8, 8};
	Rect rc3 = {3, 3, 8, 8};

	std::cout << sizeof(rc1) << std::endl;

	rc1.draw(); //draw(&rc1)
	rc2.draw();
}

// rect의 객체를 지역변수로 생성하면
// 스택에는 멤버 데이터만 객체당 한 개 씩 생성된다. 
// 현재는 rc1,rc2,rc3가 16type씩 3개 생성됨

// 멤버함수는 객체의 개수에 상관없이 코드 메모리(Code Memory)에 한개만 만들어진다.(멤버가 아닌 일반 함수와 동일)