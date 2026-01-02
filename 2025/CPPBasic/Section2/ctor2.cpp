#include <iostream>

class Point
{
	int x;
	int y;
public:
//	Point() 			{ x = 0; y = 0; }
//	Point(int a, int b) { x = a; y = b; }	
};

int main()
{
	Point p1;
//	Point p2(1,2);
}

// 생성자(constructor) 특징
// 클래스 이름과 동일한 이름의 함수
// 반환 타입을 표기하지 않고, 값을 반환 할 수 없다.
// 인자는 없어도 되고 있어도 된다.(2개 이상 만들 수 있다.)
// 객체를 생성하면 자동으로 생성자가 호출된다.
// "생성자가 있어야 객체를 생성할 수 있다."

// 디폴트 생성자(default constructor)
// 인자가 없는 생성자
// 사용자가 생성자를 한 개도 만들지 않으면 컴파일러가 디폴트 생성자를 제공한다.