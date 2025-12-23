struct Point
{
	int x;
	int y;
};

int main()
{
     // c++ 에서는 struct 생략
    //struct Point p1 = {0, 0};

	int   n1 = 0;
	Point p1 = {0, 0};
	int   x1[3] = {1,2,3};

    // uniform initialization
	int   n2 = {0};
	Point p2 = {0, 0};
	int   x2[3] = {1,2,3};	

    // 중괄호 초기화 (brace-init)
	int   n3{0};
	Point p3{0, 0};
	int   x3[3]{1,2,3};

    // 직접 초기화 Direct Initialization -> =없이 초기화 하는 것
    // 간접 초기화 Copy Initialization -> =를 사용해서 초기화 하는 것
}