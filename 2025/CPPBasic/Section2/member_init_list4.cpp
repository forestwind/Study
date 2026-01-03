#include <iostream>

class Point
{
public:
//	int x;
	int y;
	int x;

    // int x = y; // 미정의 동작(undefined)발생
    // int y = 10;
    // 순서로 초기화 됨 (멤버변수 순서)
	Point() : y{10}, x{y}
	{
	}
};

int main()
{
	Point pt;

	std::cout << pt.x << std::endl;
	std::cout << pt.y << std::endl;
}

// 멤버 초기화 리스트 사용시 주의사항
// 멤버 초기화 리스트의 실행 순서는 초기화 코드가 놓인 순서가 아니라
// 멤버 데이터가 선언된 순서 대로 초기화 된다.

// 멤버 초기화 리스트의 코드를 작성할 때는 멤버 데이터가 선언된 순서 대로 초기화 코드를 작성하는 것이 좋다.