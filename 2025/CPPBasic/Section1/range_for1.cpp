#include <iostream>

int main()
{
	int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// for statement
//	for ( int i = 0; i < 10; i++)
//	for ( int i = 0; i < sizeof(x) / sizeof(x[0]) ; i++)
	for ( int i = 0; i < std::size(x) ; i++)
	{
		std::cout << x[i] << ", ";
	}
	std::cout << std::endl;

//	for ( int e : x )
	for ( auto e : x )
	{
		std::cout << e << ", ";
	}
}

// std::size()
// 배열의 크기를 구하는 c++ 표준함수
// c++ 17 부터 지원
// 배열 뿐 만 아니라 STL의 다양한 컨테이너(list,vector,..)의 크기도 구할 수 있다. 

// range-for 문
// c++11부터 지원하는 새로운 형태의 for
// 배열 뿐 만 아니라 STL의 다양한 컨테이너에도 사용 가능