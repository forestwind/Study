struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

// 다음중 좋은 코드는 ?
void f1(Rect r)        {}
void f2(const Rect& r) {} // 좋은 코드 

void f3(int n)        {} // 좋은 코드
void f4(const int& r) {} 
// f4 어셈블리 코드를 보면 내부적으로 포인터가 만들어지는 경우도 있다.
// f3이 컴파일러의 최적화 도움을 받을 수 있다.

// 함수 인자를 받는 방법

// 1.인자의 값을 변경하는 경우
// 포인터나 레퍼런스 모두 가능
// c++에서는 레퍼런스를 좀더 많이 사용 
// void swap(int* p1, int* p2) // pointer
// void swap(int& p1, int& p2) // reference

// 2. 인자의 값을 변경하지 않는 경우
// 인자의 타입에 따라 다름

// user define type : const reference 사용 --> f1(const Rect& r)
// 일반적으로 타입의 크기가 크다
// 메모리 사용량 증가, 복사 생성자 호출의 오버헤드를 줄이기 위해

// primitive type : call by value 사용 --> f1(int n)
// 타입의 크기가 크지 않고, 생성자 개념이 없고, reference를 사용하는 것보다 더 많은 컴파일러 최적화가 지원 된다  