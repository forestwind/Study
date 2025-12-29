#include <algorithm>
#include <print>

void foo(int n) 
{
	if ( n < 40 )
		std::println("{}", n);
}

int main()
{
	int score[5] = {95, 35, 63, 72, 22};

	std::for_each(score, score + 5, foo);
}

// std::for_each
// 구간의 모든 요소를 마지막 인자로 전달된 단항함수에 차례대로 전달