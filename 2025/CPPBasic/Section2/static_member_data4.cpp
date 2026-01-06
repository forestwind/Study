#include <iostream>

class Car
{	
public:
	int speed{0};
	static int count;

	Car()  {++count;}
	~Car() {--count;}
};
int Car::count{0};

int main()
{
	Car c1;
	Car c2;
	c1.speed = 10;
	std::cout << c1.count   << std::endl; 	
	std::cout << Car::count << std::endl; 														
}

// static member data에 접근하는 2가지 방법
// 객체 이름으로 접근 -> c1.count (이 경우 count가 static 멤버인지 아닌지 구분이 되지 않는다)
// 클래스 이름으로 접근 -> Car::count (이 방식을 권장)
// private 영역에 있는 경우, static 멤버함수로 접근

// 대부분의 다른 객체지향 언어는 "클래스 이름" 으로만 접근할 수 있다. (C#,Java code)
// intance field -> c1.speed
// static field -> Car.count