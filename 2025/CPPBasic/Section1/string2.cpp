#include <iostream>
#include <cstring>
#include <string>

// std::string 
// class 문법으로 만들어진 사용자 정의 타입

int main()
{
	std::string s1 = "abcd";
	std::string s2;

	s2 = s1; // ok

	if ( s2 == s1 )
		std::cout << "same" << std::endl;
	else
		std::cout << "not same" << std::endl;

	std::string s3 = s1 + s2;
	std::cout << s3 << std::endl;
}