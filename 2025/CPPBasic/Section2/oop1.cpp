#include <iostream>

int getRectArea(int x1, int y1, int x2, int y2)
{
	return (x2 - x1) * (y2 - y1);
}

void drawRect(int x1, int y1, int x2, int y2)
{
	std::cout << "Draw Rect" << std::endl;
}

int main()
{
	int n = getRectArea(1, 1, 10, 10);

	drawRect(1, 1, 10, 10);
}

// 코드가 복잡해 보이는 이유
// 사각형 타입이 없기 때문에 사각형 한개를 int 변수 4개로 표현

// 코드를 간단하게 만들려면
// 사각형 타입이 있다.
// 구조체(struct) 문법을 사용해서 사각형 타입을 먼저 만들어서 사용하면 된다.