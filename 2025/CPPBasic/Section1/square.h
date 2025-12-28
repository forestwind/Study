#pragma once 
// 헤더 파일이 두번 포함되는걸 방지

#ifdef __cplusplus
extern "C" {
#endif

	int square(int);

#ifdef __cplusplus
}
#endif

// 모든 c++ 컴파일에는 __cplusplus 라는 매크로가 정의되어 있음