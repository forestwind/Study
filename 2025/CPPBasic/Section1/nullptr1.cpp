int main()
{
	int  n1 = 0;
	int* p1 = 0; 	// ok

	//int* p2 = 10; 	// error
	//int* p3 = n1; 	// error


	int* p4 = nullptr;    	// ok
	void(*p5)() = nullptr;	// ok (함수포인터)

	//int  n2 = nullptr; // error 정수나 실수를 초기화 할 수 없다.
}

// 0
// 정수(int)형 literal
// 포인터 변수 초기황 사용될 수 있다.(포인터로 암시적 형 변환)
// 0이 아닌 다른 정수형 literal은 포인터로 암시적 변환 될 수 없다.
// 0을 가진 정수형 변수도 포인터로 암시적 변환 될 수 없다.

// nullptr
// c++11 에서 도입
// null pointer를 나타내는 literal keyword
// 모든 종류(타입)의 포인터 변수를 초기화 하는 데 사용 가능

// 포인터 변수를 초기화 할 때는 0을 사용하지 말고 nullptr을 사용하자