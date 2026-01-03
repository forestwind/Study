class Object
{
public:
	Object() {}
	explicit Object(int a, int b) {}
};
void foo( Object obj ) {}

int main()
{
	Object o1;
	Object o2{};
	Object o3 = {};

	Object o4(1,2);
	Object o5{1,2};
	//Object o6 = {1,2};

	foo({});    // Object obj = {}
	//foo({1,2}); // Object obj = {1,2};

}

// 인자의 개수가 없거나 여러 개인 경우도 explicit를 붙일 수 있다.