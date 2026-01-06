int global{0};

class Object
{
	int idata{0};
	static int sdata;
public:
	void ifunc()        {}
	static void sfunc() {}
};
int Object::sdata{0};


void gfunc() {}

int main()
{
	gfunc();
	Object::sfunc();

	Object obj;
	obj.ifunc();
}

// static member data vs global

// global , Object::sdata  << static(data)
// obj idata               << stack

//                          메모리 할당                 접근 지정자
// 전역변수                 프로그램 처음 실행시             X
// static 멤버 데이터       프로그램 처음 실행시             O
// non static 멤버 데이터   객체 생성시                     O


// static member function  vs  global function

//                          메모리 할당                 접근 지정자
// 일반 함수              객체없이 호출 가능                 X
// static 멤버 함수       객체없이 호출 가능                 O
// non static 멤버 함수   객체 생성 후 호출 가능             O