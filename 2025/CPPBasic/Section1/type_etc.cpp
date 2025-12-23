
int main()
{
    // c에서도 bool 타입 추가됨

	bool b = true; 		// false, 0, 1 - C++98
	long long n = 10;	// C++11. 64bit 정수

    int n0 = 0x10000000; // 16진수 표기법
	int n1 = 0b1000'0000; // 2진수 표기법 - C++11
	int n2 = 1'000'000;  // digit separator
    // 정수리터럴 사이에서 '는 컴파일러단에서 무시함 (일종의 주석) 

	int* p1 = 0;
	int* p2 = nullptr; // C++11 부터.
}