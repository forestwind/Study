class Vector
{
public:
    Vector(int size){}  // 기본
	//explicit Vector(int size){} //explicit
};

void foo(Vector v)
{
}

int main()
{
	Vector v1(10);   // ok
	Vector v2 = 10;  // 기본은 가능 explicit은 error
	Vector v3{10};   // ok
	Vector v4 = {10};// 기본은 가능 explicit은 error

	v1 = 20; 	// 기본은 가능 explicit은 error (변환생성자도 막음)

	foo(v1); // ok
	foo(10); // 기본은 가능 explicit은 error
}

// void foo(vector v) {}
// foo(10); // 가능함 코드로 풀면 foo 함수의 vector v = 10;
// 함수 인자가 전달되는 것은 객체의 복사 초기화(copy initialization) 표현식

// explicit 생성자
// Direct Initialization만 가능하고 Copy Initialization은 사용할 수 없다.
// 암시적 변환의 용도로 사용될 수 없다. (명시적 변환은 사용가능)