struct Point
{
    // c++에서는 구조체 멤버에 디폴트 초기값 가능
	int x = 1;
	int y{2};
};

Point foo()
{
	Point p = {1,2};
	return p;
}

int main()
{
	struct Point pt1;
	Point pt2 = {3,4};

//	int x = pt2.x;
//	int y = pt2.y;

// strcuture binding (c++17)
// auto만 가능
// 갯수가 일치해야 함

	auto [x, y] = pt2;
//	int [x, y] = pt2;  //error

// 배열도 가능
	int arr[3] = {1,2,3};
	auto [a, b, c] = arr;
	// int a = arr[0]
	// int b = arr[1]
	// int c = arr[2]

	auto ret = foo(); // Point ret = foo();
	auto[x1, y1] = foo();
}