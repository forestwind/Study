#include <cstdlib>

int main()
{
//	int* p1 = (int*)malloc(100);// ok
	int* p1 = static_cast<int*>(malloc(100));// ok
	free(p1);

	int n = 10;
//	double* p2 = (double*)&n;  // ok
//	double* p2 = static_cast<double*>(&n);   // error

	const int c = 10;
//	int* p3 = (int*)&c; 	   // ok
//	int* p3 = static_cast<int*>(&c);   // error
}

// c++ explicit Casting
// 용도에 맞게 사용하기 위해 4개의 캐스팅 방법 제공

//static_cast
//Converts between types using a combination of implicit and user-defined conversions.
//암시적 변환과 사용자 정의 변환을 조합하여 타입을 변환한다.

//논리적으로 맞고, 반드시 필요한 경우의 캐스팅만 허용
//대부분의 프로그램은 이 캐스팅을 사용해야 한다.
// void* -> 다른 타입 포인터(int*)
// primitive type 간의 값 캐스팅 ( int n = static_cast<int>(3.4); )
// 상속 관계 타입 간의 캐스팅 ( Derived* p = static_cast<Derived*>(BaseObject); )
// 사용자 정의 변환 연산자나 변환 생성자가 있는 경우
// static_cast가 허용하지 않은 캐스팅의 경우 해당 기능을 수행하는 다른 캐스팅 방법 사용



//reinterpret_cast
//Converts between types by reinterpreting the underlying bit pattern.
//메모리에 저장된 비트 패턴을 그대로 해석만 바꿔서 타입을 변환한다.
//매우 위험하며, 저수준 메모리 조작에서만 사용.



//const_cast
//Converts between types with different cv-qualification.
//const / volatile 같은 cv 한정자 차이만 제거하거나 추가하여 타입을 변환한다.
// 실제로 const 객체를 수정하면 Undefined Behavior 발생.



//dynamic_cast
//Safely converts pointers and references to classes up, down, and sideways along the inheritance hierarchy.
//상속 관계에 있는 클래스의 포인터나 참조를 상,하,측 방향으로 안전하게 변환한다.
//런타임 타입 검사(RTTI)를 사용하며, 실패 시 nullptr 또는 예외 발생. 