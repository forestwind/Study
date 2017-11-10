#include<iostream>
#include<algorithm>  // minMax
#include<utility> // move
#include<vector>

using std::cout;
using std::endl;

void minMax()
{
	cout << std::min(2011, 2014) << endl;
	cout << std::min({ 3,1,2011,2014,-5 }) << endl;
	cout << std::min({ -10 , -5 }, [](int a, int b) { return std::abs(a) < std::abs(b); }) << endl;

	auto pairInt = std::minmax(2011, 2014);
	auto pairSeq = std::minmax({ 3,1,2011,2014,-5 });
	auto pairAbs = std::minmax({ 3,1,2011,2014,-5 }, [](int a, int b) {return std::abs(a) < std::abs(b); });

	cout << pairInt.first << "," << pairInt.second << endl;
	cout << pairSeq.first << "," << pairSeq.second << endl;
	cout << pairAbs.first << "," << pairAbs.second << endl;
}

void move()
{
	std::vector<int> myBigVec(1000000, 2011);
	std::vector<int> myVec;

	myVec = myBigVec; // 복사 의미론
	myVec = std::move(myBigVec); // 이동 의미론
}



int main()
{
	minMax();
	move();

	return 0;
}

