#include <iostream>

template<class T1, class T2>
//decltype(a + b) add(T1 a, T2 b) // error
//auto add(T1 a, T2 b) -> decltype(a + b)   // C++11 
auto add(T1 a, T2 b)    // C++14 부터 지원 (계산을 보고 추론함)
{
	return a + b;
}

int main()
{
	std::cout << add(1, 2.1) << std::endl; // ok
}

// decltype( a + b)
// a + b 표현식의 결과로 나오는 값의 타입
// 모든 변수는 선언 후에 사용되어야 한다.