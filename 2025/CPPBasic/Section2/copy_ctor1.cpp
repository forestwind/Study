class Point
{
	int x;
	int y;
public:
	Point()             : x{0}, y{0} {} // 1
	Point(int a, int b) : x{a}, y{b} {} // 2

    // 컴파일러가 생성한 코드 (복사 생성자)
    // Point(const Point& p) : x{p.x}, y{p.y} {}
};

int main()
{
	Point p1;		// ok.
	Point p2(1,2);	// ok
//	Point p3(1);	// error. Point(int) 필요
	Point p4(p2); 	// ok.    Point(Point)
} 

// 복사 생성자 (Copy Constructor)
// 자산과 동일한 타입의 객체 한 개를 인자로 가지는 생성자. Point(const Point&)
// 사용자가 만들지 않으면 컴파일러가 제공
// 컴파일러가 제공하는 디폴트 복사 생성자는 모든 멤버를 복사

// Point 클래스는 컴파일러가 제공하는 복사 생성자를 사용해도 아무 문제가 없다.
// 하지만 일부 클래스에서는 컴파일러 제공 버전이 문제가 되는 경우가 있다.