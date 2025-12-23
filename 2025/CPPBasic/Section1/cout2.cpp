#include <iostream>
#include <iomanip>

int main()
{
	int n = 10;

	std::cout << n << std::endl;

	// "%x"
    // 16진수 출력
	std::cout << std::hex << n << std::endl;

	// "%d"
    // 10진수 출력
	std::cout << std::dec << n << std::endl;

	// "%10d"
    // 출력시 갯수 지정
    // iomanip 헤더 필요
	std::cout << std::setw(10) << n << std::endl;

    // setfill -> 공백을 채울 문자 지정
	std::cout << std::setw(10) << std::setfill('#') << n << std::endl;

    // left -> 왼쪽 정렬
	std::cout << std::setw(10) << std::setfill('#') << std::left << n << std::endl;
}