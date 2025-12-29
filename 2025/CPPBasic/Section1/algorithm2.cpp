#include <algorithm>
#include "print.h"

int main()
{
	int x[5] = {1, 3, 5, 2, 4};
	
	std::sort(x, x + 5);

	// C++20 부터 제공되는 버전
	std::ranges::sort(x, x + 5);
	std::ranges::sort(x);
}

// c++20 constraint algorithm
// c++20 부터 제공되는 새로운 형태의 알고리즘
// 알고리즘(함수) 인자로 구간 뿐 아니라 컨테이너(배열이름) 도 전달가능
// std::ranges namespace 안에 제공

// 배열의 모든 요소를 정렬 하려면
// std::sort -> 구간을 나타내는 반복자(포인터)전달
// std::ranges::sort -> 구간을 나타내는 반복자(포인터) 전달, 컨테이너(배열) 이름 전달도 가능