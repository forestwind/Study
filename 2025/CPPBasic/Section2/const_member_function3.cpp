class Rect
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x{x}, y{y}, w{w}, h{h} { } 

//	int getArea() { return w * h;} // 틀린 코드..
	int getArea() const { return w * h;}
};

//void foo(Rect r) // call by value : 복사본 오버헤드
void foo(const Rect& r)
{
	int area = r.getArea(); // ????
}

int main()
{
	Rect r(1,1,10,10);  // 상수객체 아님.

	int area = r.getArea(); // ok.

	foo(r);
}

// 상수 멤버 함수는 결국, 상수 객체를 위한 문법 입니다.
// 그런데 상수 객체를 사용하는 경우가 아주 많다.

// 상수 멤버 함수 문법은 선택이 아닌 필수 문법 입니다.
// 객체의 상태를 변경하지 않은 모든 멤버 함수는 반드시 상수 멤버 함수로 만들어야 합니다.