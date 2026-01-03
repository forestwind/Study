class Vector
{
public:
    Vector(int size){}
};

int main()
{
	// C++98
	Vector v1(10);  
	Vector v2 = 10; 

	// C++11
	Vector v3{10};  
	Vector v4 = {10}; 

	v1 = 20; // v1 = Vector(20)
    
}

// 인자가 한 개(int)인 생성자가 있는 타입의 객체 생성 방법
// Vector v1(10);  직접초기화(Direct Initialization)  c++98 
// Vector v2 = 10;  직접초기화(Direct Initialization) c++11
// Vector v3{10};  복사초기화 (Copy Initialization) c++98
// Vector v4 = {10}; 복사초기화 (Copy Initialization) c++11

// 인자가 한 개인 생성자는 변환의 용도로 사용될 수 있다.
// 변환 생성자 (conversion constructor)
// Vector v1(10);  
// v1 = 20; // v1 = Vector(20)