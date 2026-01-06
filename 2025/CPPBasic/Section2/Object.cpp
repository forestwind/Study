#include "Object.h"

int Object::sdata{0};

void Object::ifunc() 
{	
}
void Object::sfunc() 
{	
}

// 선언과 구현의 분리
// static member data : 외부 정의는 구현 파일에 만들어야 한다.
// static member function : static 키워드는 함수 선언부에만 표기해야 한다.
//                          (c언어의 static 함수와 겹치는 부분이 생기기 때문)