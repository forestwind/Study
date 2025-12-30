#include <iostream>
#include <cstdlib>

int main()
{
	// c에서 메모리 할당
	int* p1 = (int*)malloc(sizeof(int));
	free(p1);

	int* p2 = new int;
	delete p2;

	int* p3 = new int[10];
	delete[] p3;
//	delete p3;
// 배열 형태로 메모리 할당한 경우 반드시 delete[] 해야 된다.
// delete로 해지할 경우 undefined(미정의 동작) 발생 (컴파일러마다 다른 동작이 발생할 수 있음)
}

//동적 메모리 할당 방법

// c언어
// int* p1 = (int*)malloc(sizeof(int));
// free(p1);

// c++
// int* p2 = new int;
// delete p2;

//              malloc                              vs      new
// 정체 :       함수                                        연산자(키워드) 언어차원에서 지원
// 인자 :       할당된 메모리 크기                           타입
// 반환타입 :    void* // 원하는 타입으로 캐스팅 필요         전달한 타입의 포인터 // 캐스팅 필요없음       
// 해지방법 :    free                                       delete 또는 delete[]
// 생성자 :      생성자 호출 안됨                            생성자 호출됨