#include <iostream>

class Number
{
	int value;
public:
	Number(int n) : value(n) {}

	int& get()       { return value;} // 1
	int  get() const { return value;} // 2
};
int main()
{
	Number num(10);
	const Number cnum(10);

	cnum.get(); // 2번만 가능
	num.get();  // 1번 호출, 없다면
				// 2번 호출.

	num.get() = 20;  // ok
	// cnum.get() = 20; // error
}

// 동일 이름의 상수 멤버 함수와 비 상수 멤버 함수를 동시에 만들 수 있다.
// 상수 객체 : 상수 멤버 함수만 호출할 수 있다.
// 비상수 객체 : 1. 비상수 멤버 함수 호출 , 2. 비상 수 멤버 함수가 없다면 상수 멤버 함수 호출

// 참조를 리턴하면 등호의 왼쪽에 올 수 있다, 값을 리턴하면 등호의 왼쪽에 올 수 없다.

// 동작 방식을 다르게 하거나 리턴값을 다르게 만들고 싶을 때 이런  방식을 사용