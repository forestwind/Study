#include <iostream>
#include <cstring>

int main()
{
    // c언어 문자처리는 char 배열또는 const char* 사용
    // =, == 연산자 사용 불가

	char s1[] = "abcd";
	char s2[5];

// 배열은 c에서는 왼쪽에 올 수 없다.

//	s2 = s1; // error
	strcpy_s(s2, s1);

//	if ( s2 == s1 )
	if ( strcmp(s2, s1 ) == 0 )
		std::cout << "same" << std::endl;
	else
		std::cout << "not same" << std::endl;
}