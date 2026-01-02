#include <iostream>

class vector
{
	int* buff;
	int  size;
public:
	vector(int sz) 
	{
		size = sz;
		buff = new int[size];
	}
	~vector() {	delete[] buff;	}

	void resize(int newsize)
	{
		if ( newsize > size )
		{
			int* temp = new int[newsize];

			memcpy(temp, buff,sizeof(int) * size);

			delete[] buff;

			buff = temp;

			size = newsize;
		}
	}
};

int main()
{
	vector v(5);

	v.resize(10);

	v.resize(20);
}
// 생성자 때 동적할당 하기 때문에 소멸자 때 동적할당을 풀어줘야 됨