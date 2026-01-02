#include <iostream>

int main()
{
//	int arr[5];

	int* buff = new int[5];

	buff[0] = 10;
	//----------------------------------
	int* temp = new int[10];

	memcpy( temp, buff, sizeof(int)*5);
	delete[] buff;

	buff = temp;
	//----------------------------------
	buff[7] = 10;
	
	delete[] buff;
}

// 배열의 단점
// 크기를 변경할 수 없다.

// 크기를 변경하려면 
// 처음에 필요한 만큼의 메모리를 동적 할당

// 동적 배열 (vector)
// 크기 변경이 가능한 배열
// 프로그램에서 자주 사용된다.
// C언어는 재사용 가능하게 설계하는 것이 쉽지 않다.

// 객체지향 프로그래밍
// 타입을 먼저 만들자
// vector 타입을 설계해보자