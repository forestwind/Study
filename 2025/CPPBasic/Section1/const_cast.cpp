int main()
{
	const int c = 10;

	//int* p1 = static_cast<int*>(&c); // error
	//int* p2 = reinterpret_cast<int*>(&c); // error
	int* p3 = const_cast<int*>(&c); // ok

//	*p3 = 20;
// 단지 주소를 어느 공간에 보관하는 정도로 쓰는건 권장
// 값을 변경하는 용도는 적합치 않음
}

// const_cast
// 객체(변수)의 상수성을 제거하는 캐스팅

//static_cast (논리적이고 이성적인 캐스팅)
//reinterpret_cast (메모리의 재해석)
//const_cast (상수성 제거)
//dynamic_cast (상속 관계에서 안전한 Down Casting) (RTTI)