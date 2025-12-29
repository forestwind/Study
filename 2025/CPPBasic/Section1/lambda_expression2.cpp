#include <algorithm>
#include <print>

bool cmp(int a, int b) { return a > b; }

int main()
{
	int x[5] = {1, 3, 5, 2, 4};

	std::sort(x, x+5, 
//		[](int a, int b) { return a>b;} );
		[](int a, int b) -> bool { return a>b;} );

}
 
// 람다 표현식의 리턴 타입 표기
// 후위 반환 표기법
// 컴파일러가 return 문장을 보고 추론 할 수 있는 경우 리턴 타입은 생략가능

// 람다 표현식의 활용
// std::sort 등의 알고리즘(c++표준함수)의 인자로 사용
// auto 변수에 담아서 함수 처럼 사용

// 왜 일반함수를 사용하지 않고 람다 표현식을 사용하는가
// 특정 상황에서 일반 함수보다 빠르고
// 지역 변수를 캡쳐할 수 있는 능력이 있다.
// 그 외에도 다양한 장점이 있다.