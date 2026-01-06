#include <iostream>


class Car
{
	int speed{0};
public:
	static int count;

	Car()  {++count;}
	~Car() {--count;}
};
int Car::count{0}; // = 0

int main()
{
	Car c1;
	Car c2;

	std::cout << Car::count << std::endl;
}

// Car 타입의 객체가 몇개 생성되었는지 개수를 알고싶다.

// 방법3. static member data "count" 사용

// static member data(정적 멤버 데이터)
// 멤버 데이터 앞에 static을 붙이는 문법
// 반드시 클래스 외부에서 선언(정의) 되어야 한다.

// static member data 특징
// 1. 프로그램이 처음 시작될 때(객체를 생성하지 않아도) 메모리에 놓이게 된다.
// 2. 객체 생성시 static member data는 객체의 메모리에는 포함되지 않는다.
// 3. 결국 모든 Car 객체가 Car::count를 공유하게 된다.
// 4. static 멤버 데이터는 "클래스이름::static멤버이름"으로 접근

// (접근 지정자를 사용할 수 있는 전역변수)
// count라는 이름으로 각각의 객체를 관리가능함( ::앞에 클래스 이름이 들어가기 때문)

// int speed : 객체당 한개씩 생성
//             instance field(member data)

// static int count : 클래스당 한 개 (동일 타입의 모든 객체 공유)
//                     class field (member data) , static field (member data)