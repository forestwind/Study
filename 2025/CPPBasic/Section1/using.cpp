// typedef int DWORD;
// typedef void(*PF)(int);

// typedef -> type에 대한 별칭
// using -> type에 대한 별칭 + template에 대한 별칭도 가능

using DWORD = int;
using PF = void(*)(int);

int main()
{
	DWORD n; // int n
	PF    p; // void(*p)(int)
}