int square(int a)
{
	return a * a;
}

double square(double a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4);
}

// 함수 오버로딩의 단점 
// 구현이 동일한데 인자 타입과 반환 타입만 다르면 유사한 함수를 여러개 만들어야 함

// c++에서 구현이 동일한 함수가 여러개 필요하면 함수를 만들지 말고 함수를 생성하는 틀(템플릿)을 만들어서 해결