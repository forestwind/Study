#include <iostream>

int main()
{
	double n1 = 30, n2 = 20;

	bool b1 = (n1 < n2);


	auto ret = (n1 <=> n2); // C++20 

	if ( ret == 0 )
		std::cout << "n1 == n2" << std::endl;

	else if ( ret > 0 )
		std::cout << "n1 > n2" << std::endl;

	else if ( ret < 0 )
		std::cout << "n1 < n2" << std::endl;

//	std::cout << ret << std::endl;
	std::cout<< typeid(ret).name() << std::endl;

}

// three way comparison (c++20)
// 우주선(spaceship) 연산자라고 불리는 연산자
// auto ret = (n1 <=> n2)
// ret == 0 -> 같다
// ret > 0 -> n1이 n2보다 크다 (n1 > n2)
// ret < 0 -> n1이 n2보다 작다 (n1 < n2)

// <=> 연산자의 반환 타입
// 구조체로 반환
// std::cout으로 출력할 수 없다.
// 0과 크기 비교만 가능하다
// 어떤 타입을 비교하는지에 따라 반환 타입이 달라진다.
// std::strong_ordering, std::weak_ordering, std::partial_ordering
// 일반적으로 auto로 받는다.