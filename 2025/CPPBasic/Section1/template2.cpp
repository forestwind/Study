
template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
	square<int>(3);
	square<double>(3.4);
   
    // 인자 생략 버전
    /*
    square(3);  // int
    square(3.4); // double
    square(3.4f); // float
    */

    // 코드 폭발(code bloat)
    // 템플릿이 너무 많은 타입에 대해 인스턴스화 되어서 코드 메모리가 증가하는 현상
    /*
    char c = 3;
    short s = 3;
    int n = 3;

    square(c);
    square(s);
    square(n);
    // 이러면 함수가 3개 생성됨
    // int 하나로도 처리가능 한 작업

    square<int>(c);
    square<int>(s);
    square<int>(n);
    */
}

// 템플릿을 사용해서 컴파일러가 실제 함수를 생성하는 것을 template instantiation(템플릿 인스턴스화) 라고 부름
// 함수 템플릿을 만들고 사용하지 않으면 실제함수는 생성 되지 않음
// 함수 템플릿을 사용시 명시적으로 전달하거나 생략하는 방법이 있음
