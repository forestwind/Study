class Object
{
	int idata;
	static int sdata;
public:
	void ifunc()
	{
		idata = 10;	// 1. ok
		sdata = 10;	// 2. ok
		sfunc();	// 3. ok
	}
	static void sfunc()
	{
		//idata = 10;	// 4. error
		sdata = 10;	// 5. ok
		//ifunc();	// 6. error
	}
};
int Object::sdata{0};

int main()
{
	Object::sfunc();

	Object obj;
	obj.ifunc();
}

// static 멤버 데이터는 객체가 없어도 메모리에 생성된다.
// static 멤버 함수는 객체 없이 호출가능 하다.

// static 멤버 함수 에서는 static 멤버(데이터,함수)만 접근 할 수 있다.