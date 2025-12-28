#include <iostream>

int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}

int main()
{
	auto ret1 = square(3);
	auto ret2 = square(3.4);

	std::cout << ret1 << std::endl;
	std::cout << ret2 << std::endl;
}

// 인자의 개수나 인자의 타입이 다르면 동일한 이름의 함수를 여러 개 만들 수 있다.
// 단 함수 호출 시 어느 함수를 호출할지 구별할 수 있어야 한다.
// 사용하기 쉬운 일관 성 있는 형태의 라이브러리를 구축