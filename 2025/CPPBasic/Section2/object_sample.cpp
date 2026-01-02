#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

int main()
{
	int n = 15;
    Rect r = {1, 1, 5, 5};
}

// 객체 지향 프로그래밍(Object Oriented Programming, OOP)
// 객체(Object)란?
// 메모리에 존재하고, 이름으로 접근할 수 있는 모든 것

//In computer science, an object can be a variable, a data structure, a function, or a method. 
//As regions of memory, they contain value and are referenced by identifiers.
// from Wikipedia
//컴퓨터 과학에서 객체(object)는 변수(variable), 자료 구조(data structure), 함수(function), 또는 메서드(method)가 될 수 있다.
//메모리의 한 영역으로서, 객체는 값을 담고 있으며 식별자(identifier)를 통해 참조된다.

//일반적으로
// int n; -> 변수(Variable), primitive type instance
// Rect r; -> 객체(Object), user define type instance

