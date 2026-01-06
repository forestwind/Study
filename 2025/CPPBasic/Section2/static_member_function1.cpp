#include <iostream>

class Car
{	
	int speed{0};
	static int count;
public:
	Car()  {++count;}
	~Car() {--count;}

	static int get_count() { return count;}
};
int Car::count{0};

int main()
{
	// 여기서 Car 객체의 갯수를 알고 싶다.
	std::cout << Car::get_count() << std::endl; 

	Car c1;
	Car c2;
//	Car::count = 100; // ?
//	std::cout << Car::count << std::endl; 
//	std::cout << c1.get_count() << std::endl; 
	std::cout << Car::get_count() << std::endl; 
}

// Car::count
// static member data
// 객체가 생성되지 않아도 메모리에 존재 한다.

// member function
// 호출하려면 반드시 객체가 있어야 한다.

// 객체 없이 private 멤버인 Car::count에 접근 할 수 없을까?
// 객체 없이 호출 가능한 멤버 함수가 필요하다

// static member function
// 객체 없이 호출 가능한 멤버 함수
// 객체 이름 또는 클래스 이름으로 접근 가능

// 객체 이름으로 접근 : c1.get_count();
// 클래스 이름으로 접근 : Car::get_count(); << 이 방식을 권장