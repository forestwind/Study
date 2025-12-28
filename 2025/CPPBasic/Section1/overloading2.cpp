void f1(int    a){}
void f1(double a){} // ok

void f2(int a) {}
void f2(int a, int b) {} // ok

// f3은 아래처럼 만들수가 없다.
// 반환값만 다르기 때문에
//void f3(int a) {}
//char f3(int a) { return 0;}

// 만드는건 문제가 없음
// 인자가 하나일때 애매모호 해짐
void f4(int a) {}
void f4(int a, int b = 0) {}

void f5(char  a) {}
void f5(short a) {}

int main()
{
	f1(3);
	f1(3.3);

	f2(1);
	f2(1, 2);

	f4(1, 2);
//	f4(1);   // ambiguos error

	f5('a'); // ok

    // 1은 int이고 char나 short가 변환이 될 수 있기 때문에
	//f5(1);
}

// 인자의 개수가 달라도 디폴트 파라미터가 있는 경우는 주의
// 함수 반환 타입만 다른 경우는 오버로딩 안됨
// 함수 호출시 명확히 결정할수 있어야 함
