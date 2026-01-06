struct Object
{
//	static int data1 = 0; // error (외부선언이 없음)
	static int data2;     // ok

	static const int data3 = 0;     // ok
	static constexpr int data4 = 0; // ok
		
	inline static int data5 = 0;
};
int Object::data2 = 0;

int main()
{
}


// 다음의 경우에는 외부 선언 없이 클래스 내부에서 초기화 가능
// static const (c++11)
// static constexpr (c++11)
// inline variable(c++17)