#include <iostream>

int count{0};
//int count_truck{0};

class Car
{
	int speed{0};
public:
	Car()  {++count;}
	~Car() {--count;}
};
int main()
{
	Car c1;
	Car c2;

	count = 100;

	std::cout << count << std::endl; // 2
									
}

// Car 타입의 객체가 몇개 생성되었는지 개수를 알고싶다.

// 방법2. 전역변수 count 사용
// 전역변수는 모든 객체가 공유 할 수 있다.
// 객체의 개수를 구하는데 성공

// 문제점1. 전역변수는 어디서나 접근 할 수 있으므로 안전하지 않다.
//         접근지정자 등으로 보호 할 수 없을까?

// 문제점 2. Car 외의 다른 타입에도 동일한 기능(객체의 개수 파악)을 하고 싶다면?
//          count 라는 이름을 다시 사용할 수 없으므로 다른 이름을 사용해야 한다.
//          count 변수의 이름을 편리하게 관리 할 수 없을까?