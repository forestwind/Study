#include <algorithm>
#include <print>

void foo(int n) 
{
	if ( n < 40 )
//	if ( n < pass ) // ?
		std::println("{}", n);
}

int main()
{
	int score[5] = {95, 35, 63, 72, 22};
	
	int pass = 70; 

	// 점수가 pass 미만을 출력하고 싶다.
//	std::for_each(score, score + 5, foo);

	std::for_each(score, score + 5, 
			[pass] (int n) { if ( n < pass ) 
						  std::println("{}", n);
						}  );
}

// capture local variable
// 람다 표현식 안에서는 자신이 속한 문맥(main 함수)의 지역변수에 접근 할 수 있다.
// 지역 변수를 캡쳐(capture) 했다고 표현