class Shape
{
public:
    virtual void draw() { }
};

class Rect : public Shape 
{
public:
    virtual void draw() override;
};


void Rect::draw()
{
}

int main()
{
}

// virtual과 override는 함수 선언부에는 적고 구현부에는 뺀다.