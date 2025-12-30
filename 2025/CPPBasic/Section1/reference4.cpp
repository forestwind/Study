#include <iostream>
#include <algorithm>

// C 언어
void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

// C++ style
/*
void swap(int& r1, int& r2)
{
    int temp = r1;
    r1 = r2;
    r2 = temp;
}
*/

// C++ template
namespace utils
{
    // 전역공간보다 이름공간에 넣는것을 권장
    // 간결한 함수는 인라인화 하면 성능 이점을 볼수 있다.
	template<class T>
	inline void swap(T& r1, T& r2)
	{
		T temp = r1;
		r1 = r2;
		r2 = temp;
	}
}
int main()
{
	int x = 10, y = 20;


// C 언어
//	swap(&x, &y);

// C++ style
//  swap(x, y);

// C++ template
//	utils::swap(x, y);

// algorithm 헤더에 들어 있음
	std::swap(x, y);

	std::cout << x << std::endl; // 20
	std::cout << y << std::endl; // 10
}