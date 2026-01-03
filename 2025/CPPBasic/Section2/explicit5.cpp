#include <type_traits>

class Object
{
public:
//	explicit(false) Object(int a) {} 

	template<typename T>
	explicit( std::is_integral_v<T> ) Object( T arg ) {}
    // T에 따라서 explicit 여부를 다르게 하기 위해서 사용
    // 예제는 T가 정수형 타입인지를 확인
};

int main()
{
	Object o1(10);
//	Object o2 = 10;
	Object o2 = 3.4;
}

// explicit(bool) 
// c++20에서 추가된 문법
// 주로 클래스 템플릿 만들 때 템플릿 인자에 따라서 explicit 여부를 결정하기 위해 사용