#include<iostream>
#include<vector>

class Rect
{
public:
    void draw() { std::cout << "draw rect" << std::endl; }

};

class Circle
{
public:
    void draw() { std::cout << "draw circle" << std::endl; }

};

int main()
{
    std::vector<Rect*> v1;
    std::vector<Circle*> v2;
}