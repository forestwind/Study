#include <algorithm>
#include <print>

bool cmp(int a, int b) { return a > b; }

int main()
{
	int x[5] = {1, 3, 5, 2, 4};

//	std::sort(x, x + 5); // 1, 2, 3, 4, 5

//	std::sort(x, x + 5, cmp); // 5, 4, 3, 2, 1


	std::sort(x, x + 5, 
		[](int a, int b) { return a > b; } );


	for(int i = 0; i < 5; i++)
		std::println("{}", x[i] );
}

// std::sort -> 주어진 구간의 모든 요소를 오름차순으로 정렬
// 내림차순으로 할려면 sort가 내부적으로 요소를 비교할 때 사용할 이항함수를 인자로 전달
// 단항 함수(unary function) : 인자가 1개인 함수
// 이항 함수(binary function) : 인자가 2개인 함수

// 람다 표현식(lambda expression)
// 익명의 함수(객체)를 만드는 문법
// 함수이름(주소)가 필요한 위치에 함수 구현자체를 표기할 수 있는 문법
// c++11에서 도입된 문법

// [] 기호
// 람다표현식이 시작됨을 알리는 lambda introducer