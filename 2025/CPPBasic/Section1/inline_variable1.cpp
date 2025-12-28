#include <cstdio>
#include "gvar.h"

void f1();

int main()
{
     printf("main : %p\n", &x);
     printf("main y : %p\n", &y);
     f1();
}

// 전역 변수를 헤더 파일에 만들게 되면
// 2개 이상의 소스에서 include 하게 되면 동일 이름에 대해서 여러 개의 정의가 발생하므로 컴파일 에러

// 하나의 전역변수를 여러 개 파일에서 접근하려면 
// 소스 파일중 한 곳에서 정의하고 헤더에는 extern 선언을 제공
// 전역변수를 여러 개 파일에서 사용하는 방법

// inline variable (c++ 17)
// 전역 변수에 대해서 multiple definition을 허용해 달라는 문법
// 전역 변수의 정의를 헤더에 넣을 수 있다.

// 전역 변수를 헤더에 넣어서 얻게 되는 장점
// head-only 라이브러리를 만들기 쉬워 진다.