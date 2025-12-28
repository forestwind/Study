#include <cstdio>

void f1();
void f2();

inline int sub(int a, int b)
{
	return a - b;
}

int main()
{
    sub(1, 2);
    printf("main : %p\n", &sub);
    f1();
    f2();
}

// 인라인 함수는 헤더에 작성 한 후 필요한 소스에서 include하는 것이 관례지만
// 각각의 소스에 별도로 작성해도 된다. 
// 이 경우 모든 함수 앞에 반드시 inline을 붙여야 한다.
// 모든 파일에서 sub 함수의 주소는 동일하다 (최종 실행파일에는 한 개의 함수만 생성)

// 동일한 이름의 인라인 함수 중 구현이 다른 경우가 있다면
// undefined (잘못된 코드)
// 에러가 나지는 않는다.