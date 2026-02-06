#include <iostream>

class Counter
{
	int count{0};
public:
//	Counter increment()
	Counter& increment()
	{
		++count;
		return *this;
	}
	int get() { return count;}
};

int main()
{
	Counter c;	

	c.increment().increment().increment();

	std::cout << c.get() << std::endl;
}

// 값으로 리턴하면 임시객체가 3개 생성 된다. 줄이 넘어가서 파괴되기 때문에 정확한 count를 얻을 수 없다.