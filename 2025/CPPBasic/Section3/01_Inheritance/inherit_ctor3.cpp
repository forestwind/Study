#include <string>

class Person
{
    std::string name;
    int age;
public:
//  Person() : name("A"), age(0) {}
    Person(const std::string& n, int a) : name(n), age(a) {}
};

class Student : public Person
{
    int id;
public:
    Student(const std::string& n, int a, int id) : Person(n, a), id(id) {}    
};

int main()
{
    //Person p;
    Student s("Kim", 20, 33);
}

// 디폴트 생성자가 없는 클래스도 많이 있다.