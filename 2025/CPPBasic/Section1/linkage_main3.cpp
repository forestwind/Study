#include <cstdio>
#include "linkage3.h"

void f1();

int main()
{
    printf("main s: %p\n", &s);
    printf("main x: %p\n", &x);
    printf("main y: %p\n", &y);
}

// 전역변수와 linkage

// non-static, non-const, non-inline : external linkage
// static variable : internal linkage

// const variable : internal linkage
// #define을 대체할려고 만듬 (macro는 헤더로 작업했음)

// inline variable : external linkage