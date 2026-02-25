#include <vector>

class Animal
{
public:
    int age = 0;
};

class Dog : public Animal {};
class Cat : public Animal {};

//void NewYear(Dog* p)
void NewYear(Animal* p)
{
    ++(p->age);
}

int main()
{
    Dog dog;
    NewYear(&dog);

    Cat cat;
    NewYear(&cat);

    std::vector<Dog*> v1; // Dog만 보관하는 vector
    std::vector<Animal*> v2; // 모든 동물을 보관
}

// upcasting 활용
// 1. 동종(동일 기반 클래스 부터 파생된 클래스)을 처리하는 함수
// 2. 동종 보관하는 컨테이너