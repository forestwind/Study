
void f1(int a = 0, int b = 0, int c = 0 ) {} // ok
void f2(int a,     int b = 0, int c = 0 ) {} // ok
//void f3(int a = 0, int b,     int c = 0 ) {} // error
//void f4(int a = 0, int b = 0, int c )     {} // error


void foo(int a, int b = 0, int c = 0);

int main()
{
	foo(1); 
}

// 마지막 인자부터 차례대로 default 값을 지정
// 함수를 선언과 구현으로 분리할 때는 함수 선언부에만 디폴트 값을 표기해야 한다. (에러)


//void foo(int a, int b  , int c )
void foo(int a, int b /* = 0 */ , int c /* = 0 */ )
{	
}

// 컴파일러가 컴파일시에 함수 호출하는 함수인자에 디폴트 값을 채워주는 것