int square(int a)    // square_int(  )
{
	return a * a;
}

double square(double a) // square_double( )
{
	return a * a;
}

int main()
{
	square(3);   // square_int(3)
	square(3.4); // square_double(3.4)
}

// 함수 오버로딩은 컴파일 시간에 함수의 이름을 변경
// name mangling 이라 불리는 현상
// mangling 규칙은 컴파일러마다 다름
// 함수 오버로딩의 원리는 name mangling