class Point
{
	int x{0};
	int y{0};
public:
	Point() {}
//	Point(const Point& p) : x{p.x}, y{p.y} {}
};

int main()
{
	Point p1;
	Point p2(p1);


	Point p3 = p1; // 

	Point p4;
	p4 = p1;
}

// 복사 생성자도 생성자이다.

// 디폴트 생성자와 복사 생성자의 자동 생성 규칙
// 디폴트 생성자 : 생성자를 한 개도 제공하지 않는 경우
// 복사 생성자 : 복사 생성자를 제공하지 않은 경우

// 복사 생성자도 생성자이기 때문에 복사 생성자를 사용자가 정의하면 디폴트 생성자는 자동으로 생성되지 않는다.

// 초기화 vs 대입
// Point p3 = p1; << 복사 생성자 호출

// Point p4;  << 디폴트 생성자 호출
// p4 = p1;   << 대입 연산자 호출 p4.operator=(p1)