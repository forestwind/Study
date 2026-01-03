#include <vector>
#include <string>

void f1(std::string s)     {}
void f2(std::vector<int> v){}

int main()
{
	std::string s1("hello");
	std::string s2 = "hello"; // ok

	std::vector<int> v1(10);
	//std::vector<int> v2 = 10; // error

	f1("hello"); // ok. string s = "hello"
	//f2(10);      // error. vector<int> v = 10

	//std::vector<int> v3 = 10;   // error
	std::vector<int> v4 = {10}; // ok
}

// STL과 explicit 생성자
// 생성자가 explicit인 것도 있고 아닌 것도 있다.
// string(const char* s); explicit 아님
// explicit vector(std::size_t sz);

// vector 사용시 ()와 {}
// vector<int> v(10); // 크기가 10개인 vector 
// -> explicit vector(std::size_t)

// vector<int> v{10}; // 크기가 한 개(초기값 10)인 vector 
// -> vector(std::initializer_list)