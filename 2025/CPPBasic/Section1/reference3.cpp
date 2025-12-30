void f1(int* p)
{
	if ( p != 0 ) 
	{

	}
}
void f2(int& r)
{
	
}

int main()
{
	int* p = 0; // 널포인터는 있다.
//	int& r;     // error. 널 참조는 없다.
//	int& r = n;
}

//scanf vs std::cin
// 사용자가 입력한 값을 인자로 전달한 변수에 담아 와야 한다.

// scanf("%d", &n);   // call by pointer
// std::cin >> n;     // call by reference