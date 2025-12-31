int main()
{
	int*    p1 = nullptr; // ok
	double* p2 = nullptr; // ok

	//int n1 = nullptr;	// error
	//int n2{nullptr};	// error

	//bool b1 = nullptr;	// error (복사초기화 x)
	bool b2{nullptr};	// ok nullptr이 if문에 들어가기 위해서는 허용되어야 함 (직접초기화)

	if ( nullptr ) {}	// ok
}

// nullptr과 변환
// 모든 종류(타입)의 포인터로 초기화시에 사용될 수 있다.
// bool 변수의 직접 초기화(direct initialization)에 사용될 수 있다.

// nullptr과 조건문
// nullptr은 조건문에 사용될 수 있다.