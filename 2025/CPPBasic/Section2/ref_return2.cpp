struct Point
{
	int x;
	int y;
};
Point pt = {1, 2};

Point f1()  // return by value
{
	return pt;
}
Point& f2() // return by reference
{
	return pt;
}
int main()
{
//	f1().x = 10; // 리턴용임시객체.x = 10
				 // error
	f2().x = 10; // pt.x = 10   ok.
}

// 함수가 객체를 값을 반환하는 경우 리턴용 임시객체(temporary)가 생성되어서 반환 된다.
// return 용도로 생성된 임시객체(temporary)는 함수를 호출하는 문장의 끝에서 파괴 된다.
// 등호의 왼쪽에 놓일 수 없다(rvalue)

// temporary의 생성과 파괴
// 생성될 때 복사 생성자 호출 되고 파괴될 때 소멸자가 호출 된다.