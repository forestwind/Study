int add1(int a, int b)
{
	return a + b;
}

auto add2(int a, int b) -> int
{
	return a + b;
}

int main()
{
	int ret1 = add1(1,2);
	int ret2 = add2(1,2);
}

// 후위 반환 타입
// suffix return type, trailing return type 
// c++11 에서 등장한 새로운 함수 표기법

// 새로운 표기법이 필요한 이유
// 복잡한 형태의 함수 템플릿
// 람다 표현식