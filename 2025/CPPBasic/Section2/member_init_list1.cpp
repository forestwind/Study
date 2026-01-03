#include <string>

class People1
{
	std::string name;
	int age;
public:
	People1(const std::string& s, int a) 
	{
		name = s; // 대입
		age = a;
        // 1. string 타입의 디폴트 생성자 호출
        // 2. 대입연산자 호출 (name.operator=(s))
	}
};

class People2
{
	std::string name;
	int age;
public:
	People2(const std::string& s, int a) : name{s}, age{a} // 초기화
	{
        // 1. 인자가 한 개인 생성자 호출로 초기화
	}
};

int main()
{
	std::string s{"kim"};

	People1 p1(s, 20);
	People2 p2(s, 20);
}

//std::string -> "basic_string 클래스 템플릿"

// 초기화(initialization)
// 객체를 생성하면서 초기값을 전달하는 것 (인자가 한 개인 생성자를 호출 즉 한번의 함수 호출로 초기화)
// std::string name(s);
// std::string name{s};
// std::string name = s;

// 대입(assignment)
// 객체를 생성한 후 값을 전달(대입) 하는것
// std::string name;
// name = s;
// 디폴트 생성자 호출 -> 대입 연산자 호출 (즉 두번의 함수 호출 발생)


// 멤버 데이터 초기화 3가지
// 생성자에서 {} 안에서 초기화
// 멤버 초기화 리스트 (member initializer list) c++98
// default member initializer c++11
