#include<iostream>
#include<vector>

class Shape
{
public:
    virtual void draw() { std::cout << "draw shape" << std::endl; }
};

class Rect : public Shape 
{
public:
    virtual void draw() { std::cout << "draw rect" << std::endl; }
};

class Circle : public Shape
{
public:
   virtual void draw() { std::cout << "draw circle" << std::endl; }
};

int main()
{
    std::vector<Shape*> v;

    while(1)
    {
        int cmd;
        std::cin >> cmd;

        if(cmd == 1)
        {
            //Rect rc;
            Shape* p = new Rect;
            v.push_back(p);
        }
        else if (cmd ==2)
        {
            v.push_back(new Circle);
        }
        else if(cmd == 9)
        {
            for(auto p : v)  // p는 Shape*
                p->draw();
        }
    }
}

// 모든 도형의 공통의 기반 클래스가 있다면 모든 종류의 도형을 하나의 컨테이너에 보관 할 수 있다.

// 객체는 Rect 또는 Circle 이지만 vector에 보관시에sms Shape* 로 보관 되므로 draw()를 호출할 수 없다.

// 해결방법 1
// Shape* 를 Rect* 또는 Circle*로 캐스팅 한다.
// 그런데 코드를 작성할 때 어떤 도형인지 알 수 있을까?

// 해결방법 2
// Shape 안에 반드시 draw() 함수가 있어야 한다.


// 핵심3 . 공통의 특징은 기반 클래스에도 있어야.
/// 모든 파생클래스(Rect,Circle) 의 공통의 특징은 반드시 기반 클래스(Shape)에도 있어야한다.
// -> 그래야, 기반 클래스의 포인터 타입으로 객체를 관리할 때 해당 특징을 사용할 수 있다.
// Shape 안에 반드시 draw() 함수가 있어야 한다.

// 핵심4 . 가상함수 도입
// 기반 클래스 함수 중 파생클래스가 재정의하게 되는 함수는 반드시 가상함수로 만들어야 한다.