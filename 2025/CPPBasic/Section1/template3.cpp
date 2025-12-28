#include <cstdio>

/*
auto square(auto a)
{
	auto n; // error
	return a * a;
}
*/
// c++ 20부터 지원함 auto 사용함

// typename, class 둘 다 사용가능함
//template<typename T> 
template<class T> 
T square(T a)
{
    T n; // 가능
	return a * a;
}

int main()
{
	square<int>(3);
	square(3); // square는 함수 아님
			   // => square<int>(3)

//	printf("%p\n", &square); // error
	printf("%p\n", &square<int>); // ok
	printf("%p\n", &square<double>); // ok

    // square는 함수가 아니라서 주소를 구할 수 없음
    // square<타입> -> 주소를 구할 수 있다.
}