
class Shape
{
public:
    virtual void draw() { }
};

class Rect : public Shape 
{
public:
    virtual void draw() override { }
};

int main()
{
    Rect r;
    r.draw();
}

// 가상 함수 문법
// 가상함수를 만들 때는 함수 앞에 virtual 을 붙인다.

// 가상함수를 재정의 할 때는 virtual 을 붙여도 되고 안붙여도 된다.
// -> 가독성을 위해서는 붙이는 것이 좋다.

// 가상 함수 재정의시 함수 이름 등에 오타가 있어도 에러가 발생하지 않는다.
// -> 컴파일러는 새로운 함수를 추가 했다고 생각.
// 가상함수 재정의시 override 를 붙이는 것이 안전하다. (C++11)