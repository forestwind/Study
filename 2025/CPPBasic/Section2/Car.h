class Car
{	
	int speed{0};
public:
	static int count;
	Car();
	~Car();
};

// 클래스를 선언과 구현으로 분리할 경우
// static 멤버 변수의 외부 선언은 구현파일(.cpp)에 있어야 한다.