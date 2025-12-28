#include <cstdio>
#include "linkage2.h"

void f1();

int main()
{
    printf("main goo: %p\n", &goo);
    printf("main hoo: %p\n", &hoo);
    printf("main joo: %p\n", &joo);
    f1();
}

// 헤더 파일에 함수 구현을 넣기
// non-static, non-inline : 안됨 (2개이상에서 include시 중복정의 에러 발생)
// static function : 가능
// inline function : 가능

// goo static -> a와 b의 cpp의 goo는 서로 다른 함수(주소가 다름)
// 각각의 파일에서 다른 함수를 사용
// internal linkage

// hoo inline -> a와 b의 cpp의 goo는 동일한 함수(주소가 같음)
// 한개의 함수를 여러 파일에서 사용
// external linkage

// inline static도 가능
// 인라인 치환을 하되 internal linkage를 가지게 해달라(주소가 다름)



// 헤더 파일과 linkage
// non-static, non-inline : external linkage (헤더에 넣으면 안됨) 
// 여러군데서 include 하면 에러 발생

// static function : internal linkage (헤더에 넣어도 된다)

// inline function : external linkage (헤더에 넣어도 된다)

// 헤더에는 internal linkage를 가지는것만 넣을 수 있다
// 단 inline은 multiple definition을 허용하므로 헤더에 넣을 수 있다.