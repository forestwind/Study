#include <string>

//struct Person
class Person
{
//private:
	std::string name;
	int age;

public:
	void setAge(int value)
	{
		if ( value >= 1 && value < 150 )
			age = value;
	}
};

int main()
{
	Person p;
//	p.age = -10; // error
	p.setAge(-10);
}

// 멤버 데이터를 외부에서 직접 접근하면 객체가 잘못된 상태가 될 수 도 있다.
// 멤버 데이터는 외부의 잘못된 사용으로 부터 보호 하는 것이 안전하다.

// 접근 지정자
// private : 멤버함수에서만 접근 가능
// 멤버가 아닌 함수에서 접근 시 에러

// public : 모든(멤버와 멤버가 아닌) 함수에서 접근 가능

// protected : 멤버 함수와 파생 클래스 멤버 함수에서 접근가능

// 멤버 함수를 통해서만 멤버 데이터에 접근

// 캡슐화(Encapsulation)
// 멤버 데이터는 private 영역에 놓고 외부의 잘못된 사용으로 부터 보호 한다.
// 멤버 데이터의 변경은 잘 정의된 규칙을 가진 멤버함수를 통해서만 변경 가능하게 한다.

// struct vs class
// struct는 접근 지정자 생략시 디폴트가 public
// class는 접근 지정자 생략시 디폴트가 private

// c++은 그렇고 c#에서는 struct는 스택영역, class는 힙영역