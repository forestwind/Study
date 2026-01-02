#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1(5);     // 크기가 5인 배열
	std::vector<int> v2(5, 3);  // 크기가 5인 배열을 3으로 초기화
	std::vector<int> v3 = {1,2,3,4,5}; // 각각의 요소 초기화

	v3[0] = 99;

	v3.push_back(3); // 제일 끝에 3인 값을 하나  추가한다

	std::cout << v3.size() << std::endl; // 6

}

// STL
// c++ 언어의 표준 라이브러리
// 대부분 템플릿으로 되어 있다.
// Standard Template Library

// std::vector
// 크기 변경이 가능한 동적 배열
// 사용법은 배열과 거의 동일하다.
// [] 연산자로 요소에 접근