int gcd(int a, int b)
{
	return b != 0 ? gcd(b, a % b) : a;
}

//double gcd(double a, double b); // 구현이 없다. 선언만
// 링커에게 맞김 (링크에러), 컴파일단에는 에러가 나지 않음

double gcd(double a, double b) = delete; // C++, 함수 삭제

int main()
{
	gcd(10, 4);

	//gcd(3.3, 4.4);  // 컴파일 에러가 난다.
}

// delete function (해당 함수를 사용하지 못하게 하는 문법)

// gcd(int,int) 함수가 있다
// gcd(3.3, 4.4) 처럼 사용
// gcd(double,double) 함수를
 
// 1. 제공하지 않는 경우 
// double은 int로 암시적 형 변환 될 수 있다. gcd(int,int) 함수 호출 됨

// 2. 선언만 제공할 경우
// 링커가 gcd(double,double) 함수를 찾을 수 없다. linker error 발생

// 3. 삭제(delete)한 경우
// 삭제된 함수를 사용할 수 없다는 complie error

// 언제 함수를 삭제 하는가?
// class 문법에는 사용자가 만들지 않으면 컴파일러가 자동으로 생성하는 함수가 있다.
// 컴파일러에게 자동 생성하는 함수를 만들지 못하게 하고 싶을 때 사용
// ex) 복사 생성자를 자동생성하지 말라고 컴파일러에게 요청