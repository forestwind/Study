#include <iostream>
#include <ranges>

bool is_odd_number(int n) { return n % 2 == 1; }

int main()
{
	int x[10] = {1,2,3,4,5,6,7,8,9,10};

//	for ( auto e : x)
//	for ( auto e : std::views::reverse(x) )                             // 거꾸로
//	for ( auto e : std::views::take(x, 3) )                             // 3개만 꺼내기
//	for ( auto e : std::views::reverse( std::views::take(x, 3) ) )      // 3개만 꺼내서 뒤집기
//	for ( auto e : std::views::drop(x, 3) )                             // 3개를 빼서 적용
//	for ( auto e : std::views::filter(x, is_odd_number) )               // 특정 함수에서 참인것만 사용
	for ( auto e : std::views::filter(x, [](int n) { return n % 2 == 1; }   ) )  // 람다사용
	{
		std::cout << e << ", ";
	}
}

// range-for 시 거꾸로 출력 하는 방법
// c++20부터 제공되는 Ranges Library를 사용하면 됨
// <ranges> 헤더
// std::views namespace안에 다양한 함수 제공