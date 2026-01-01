#include <iostream>

int main()
{
	int n = 10;

//	char* p1 = static_cast<char*>(&n); // error
	char* p2 = reinterpret_cast<char*>(&n); // ok
// 4바이트의 바라보는 방식을 1바이트로 바라보겠다.


//	char& r1 = static_cast<char&>(n); // error
	char& r2 = reinterpret_cast<char&>(n); // ok

	// 정수 <=> 주소
//	int* p3 = static_cast<int*>(1000); // error
	int* p4 = reinterpret_cast<int*>(1000); // ok

    // 캐스팅도 필요없는 코드
	//double d = reinterpret_cast<double>(3);
    // 변환은 유효한 표준 변환이나 암시적으로나 staic_cast, c스타일 캐스트, 함수 스타일 캐스트틀 사용하여 수행될 수 있다.
} 

// reinterpret_cast
// 메모리의 재해석(reinterpret)
// 메모리의 해석 방식을 변경하는 캐스팅
// 1. 서로 다른 타입의 주소(참조) 캐스팅
// 2. 정수 <-> 주소 사이의 캐스팅