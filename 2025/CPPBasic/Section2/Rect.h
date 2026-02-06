class Rect
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h);

	int getArea() const;
};

// const 멤버 함수의 선언과 구현의 분리
// 클래스의 선언과 구현 파일로 분리 할 때 const 키워드는 멤버 함수 선언과 구현에 모두 표기해야 한다.