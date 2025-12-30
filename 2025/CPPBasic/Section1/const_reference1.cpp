struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

//void foo( Rect r )
void foo( const Rect& r )
{
	// r.left = 100; // error
}

int main()
{
	Rect rc = {1, 1, 5, 5};
	foo(rc);
}

// foo함수에 Rect 타입 변수 rc를 전달하는
// foo함수 안에서는 rc의 상태는 변경되면 안된다.

// call by value
// 인자로 전달된 변수를 수정하지 않겠다는 약속
// 그런데 구조체 같은 사용자 정의 타입을 인자로 사용하는 경우 복사본에 대한 오버헤드가 있다. 

// const reference (const Rect&)
// 복사본에 대한 오버헤드 없이 인자로 전달된 변수를 수정하지 않겠다는 약속
// c++에서 가장 널리 사용되는 인자 전달 방식