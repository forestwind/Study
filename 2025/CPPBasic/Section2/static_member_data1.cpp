#include <iostream>

class Car
{
	int speed{0};
public:
	int count{0};

	Car()  {++count;}
	~Car() {--count;}
};

int main()
{
	Car c1;
	Car c2;

	std::cout << c1.count << std::endl; // 2?
										// 1
}

// Car 타입의 객체가 몇개 생성되었는지 개수를 알고싶다.

// 방법1. 멤버데이터 count 사용
// 멤버 데이터는 객체당 한 개가 생성된다.
// 각 객체가 독립적인 자신의 count 멤버변수를 사용하므로 실패