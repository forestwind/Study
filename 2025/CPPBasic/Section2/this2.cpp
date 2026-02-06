class Counter
{
	int count{0};
public:
	void reset(int count = 0)
	{
		this->count = count;
	}
	Counter* increment()
	{
		++count;
		return this;
	}
	Counter& decrement()
	{
		--count;
		return *this;
	}
};
int main()
{
	Counter c;	
	c.increment()->increment()->increment();
	c.decrement().decrement().decrement();
}

// this가 사용되는 경우
// 멤버 데이터 임을 명확히 하고 싶을 때
// 멤버 함수가 this 또는 *this을 반환 하면 멤버 함수를 연속적으로 호출 할 수 있다.
// *this를 반환하는 경우 반드시 참조(reference)로 반환 해야 한다.