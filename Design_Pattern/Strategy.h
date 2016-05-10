#include "stdafx.h"

using namespace std;

// 전략(스트래티지) : 같은 문제를 해결하는 여러 알고리즘이 캡슐화 되어 있고 필요할때 교체함으로서 동일한 문제를 다른 알고리즘으로 해결할수 있게 하는 패턴
//					  알고리즘을 사용하는 클라이언트와 상관없이 독립적으로 알고리즘을 다양하게 변경할수 있음

// Strategy : 인터페이스 나 추상클래스로 호출방법 명시
class MoveStrategy
{
public:
	virtual void move() {}
};

// concreteStrategy1 : 알고리즘을 실제로 구현한 클래스 -> 상속 받아서 처리
class RunStrategy : public MoveStrategy
{
public:
	virtual void move()	{ cout << " 달립니다 " << endl; }
};
// concreteStrategy2
class WalkStrategy : public MoveStrategy
{
public:
	virtual void move()	{ cout << " 걷습니다 " << endl; }
};





class AttackStrategy
{
public:
	virtual void attack(){	}
};


class PunchStrategy : public AttackStrategy
{
public:
	virtual void attack() { cout << "펀치공격을 합니다" << endl; }
};

class KickStrategy : public AttackStrategy
{
public:
	virtual void attack() { cout << " 킥공격을 합니다" << endl; }
};



class CPlayer
{
public:
	MoveStrategy*		moveStratgy;
	AttackStrategy*		attackStratgy;
};



// Context : 스트래티지 패턴을 이용하는 역할 , 필요에 동적으로 구체적인 전략을 바꿈
class StrategyClient
{
public:

	void Play()
	{
		CPlayer m_player;


		m_player.attackStratgy = new PunchStrategy();
		m_player.moveStratgy = new WalkStrategy();

		m_player.attackStratgy->attack();
		m_player.moveStratgy->move();

		delete m_player.attackStratgy;
		delete m_player.moveStratgy;

		cout << "전략 바꾸기" << endl;

		m_player.attackStratgy = new KickStrategy();
		m_player.moveStratgy = new RunStrategy();

		m_player.attackStratgy->attack();
		m_player.moveStratgy->move();

		delete m_player.attackStratgy;
		delete m_player.moveStratgy;

	}
};