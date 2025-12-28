#include "sub.h"

int main()
{
    sub(5, 3);
}

// sub를 include한 하나의 소스에서만 사용해서 빌드하면 가능
// sub를 include가 여러번 된 상태에서 빌드를 하면 링킹 에러가 뜸 (이미 정의되어 있음)

// 일반 함수의 구현을 헤더에 작성 하면
// 2개 이상의 소스에서 include 하게 되면 동일한 이름의 함수의 구현이 여러 개 만들어지게 된다.
// ODR (One Definition Rule) 위반 이므로 에러

// 인라인 함수는 함수의 정의가 여러 개 인 것을 허용 (multiple definitions are permitted)
// ODR 예외, 인라인 함수를 헤더 파일에 넣을 수 있다.