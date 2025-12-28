#include "linkage1.h"

int main()
{
    foo(); // ok
    goo(); // error
}

// linkage
// 어떤 심볼이 자신이 정의된 컴파일 단위(파일) 외의 "다른 파일에서도 사용가능 한가" 를 나타내는 개념

// 종류
// no linkage

// internal linkage
// 심볼(함수,변수이름)이 "같은 컴파일 단위(파일) 에서만 사용가능"

// external linkage
// 프로젝트내의 "모든 컴파일 단위(파일) 에서만 사용가능"

// 일반 함수
// 다른 파일에서도 호출 가능 (external linkage)

// static function
// 자신을 정의한 파일에서만 사용가능 (internal linkage)
// 객체지향 언어가 가진 class static member 와는 완전히 다른 문법
// c언어에서 만든 문법이고, c++ 도 지원