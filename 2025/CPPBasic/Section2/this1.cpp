#include <iostream>

class Point
{
	int x{0};
	int y{0};
public:
	void set(int a, int b)
	{
		x = a;
		y = b;	

		std::cout << this << std::endl;			
	}
//	static void foo() {} // this 사용 불가
};

int main()
{
	Point pt1;
	Point pt2;

	std::cout << &pt1 << std::endl;	
	std::cout << &pt2 << std::endl;	

	pt1.set(10, 20);
	pt2.set(10, 20);
//	set(&pt1, 10, 20); // error
}

// 멤버 데이터는 객체당 한 개씩 생성 된다.
// 멤버 함수는 코드 메모리에 한 개만 만들어저 있다. 객체가 여러 개 생성되어도 멤버 함수는 한 개만 있다.
// pt1.set(10, 20) 처럼 사용시 set() 함수에는 함수 인자 10,20 뿐 아니라 객체 pt1의 정보(주소)도 전달 되어야 한다.

// 멤버 함수 호출 시 객체의 주소가 같이 전달된다. this call 이라고 한다.

// 컴파일러가 변경한 코드
//  void set(Point* this, int a, int b)
// {
//      this->x = a;
//      this->y = b;
//}

// int main()
// {
//      Point pt1;
//      Point pt2;
//
//      set(&pt1, 10, 20);
//      set(&pt2, 10, 20);
// }

// 주의 
// 실제 함수 인자가 전달되는 방식과 객체 주소가 전달되는 방식은 약간의 차이가 있다.
// (32bit / 64bit 환경, 컴파일러에 따라서도 차이가 있음)

// this
// 멤버 함수 안에서 사용가능한 키워드
// 해당 멤버 함수를 호출할 때 사용한 객체의 주소
// static 멤버 함수에서는 this를 사용할 수 없다.