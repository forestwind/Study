class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x{a}, y{b}
	{
	}
};


class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	Rect(int x1, int y1, int x2, int y2) : leftTop{x1, y1}, rightBottom(x2, y2)
	{
	//	leftTop(x1, y1);
	}
};

int main()
{
	Rect r(1,1,10,10);
}

// point는 디폴트 생성자가 없다
// Point p1; //error
// Point p2(0,0) // ok

// 객체를 생성하면 모든 멤버 데이터의 생성자도 호출된다.

//디폴트 생성자가 없는 타입이 멤버로 있는 경우