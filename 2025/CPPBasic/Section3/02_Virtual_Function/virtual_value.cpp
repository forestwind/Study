#include<iostream>
#include<vector>

class Shape
{
    int color;
public:
    virtual void draw() { std::cout << "draw shape" << std::endl; }
};

class Rect : public Shape 
{
    int width;
    int height;
public:
    virtual void draw() override { std::cout << "draw rect" << std::endl; }
};

void foo(Shape* p, Shape& r, Shape s)
{
    p->draw(); // draw rect
    r.draw();  // draw rect
    s.draw();  // draw shape
}

int main()
{
    Rect r;
    foo(&r, r, r);

    std::vector<Shape*> v1;
    std::vector<Shape> v2;

    // v1은 모든 도형을 하나의 컨테이너에 보관하겠다. 각각이 circle이나 rect가 될 수 있다.
    // 모든 도형들의 포인터를 보관한다.

    // v2는 shape를 보관한다. Rect나 Circle이 가리키는게 아니라 복사본(Shape)이 저장된다
    // Rect나 Circle을 보관하는 것이 아니라 Shape를 보관하는 vector
}

// call by pointer(Shape* p)와 call by reference(Shape& r)는 객체의 주소를 따라가서 조사해서 Rect의 draw()가 호출 된다.
// call by value(Shape s)는 복사본 객체가 생성(Object Slicing)되서 Rect가 아닌 Shape가 복사된다.