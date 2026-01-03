class Object
{
	const int c;
	int& r;
public:
	Object( int n, int& x) : c{n}, r{x}
	{
//		c = n;
//		r = x;
	}
};

int main()
{
	int num = 10;

	Object obj(10, num);
}

// 반드시 member initializer list를 사용해야 하는 경우
// 1. 멤버 데이터로 상수나 참조가 있는 경우 (const, &)
// 2. 디폴트 생성자가 없는 타입이 멤버로 있는 경우