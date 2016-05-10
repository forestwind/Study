#include "stdafx.h"

using namespace std;

// ����(��Ʈ��Ƽ��) : ���� ������ �ذ��ϴ� ���� �˰����� ĸ��ȭ �Ǿ� �ְ� �ʿ��Ҷ� ��ü�����μ� ������ ������ �ٸ� �˰������� �ذ��Ҽ� �ְ� �ϴ� ����
//					  �˰����� ����ϴ� Ŭ���̾�Ʈ�� ������� ���������� �˰����� �پ��ϰ� �����Ҽ� ����

// Strategy : �������̽� �� �߻�Ŭ������ ȣ���� ���
class MoveStrategy
{
public:
	virtual void move() {}
};

// concreteStrategy1 : �˰����� ������ ������ Ŭ���� -> ��� �޾Ƽ� ó��
class RunStrategy : public MoveStrategy
{
public:
	virtual void move()	{ cout << " �޸��ϴ� " << endl; }
};
// concreteStrategy2
class WalkStrategy : public MoveStrategy
{
public:
	virtual void move()	{ cout << " �Ƚ��ϴ� " << endl; }
};





class AttackStrategy
{
public:
	virtual void attack(){	}
};


class PunchStrategy : public AttackStrategy
{
public:
	virtual void attack() { cout << "��ġ������ �մϴ�" << endl; }
};

class KickStrategy : public AttackStrategy
{
public:
	virtual void attack() { cout << " ű������ �մϴ�" << endl; }
};



class CPlayer
{
public:
	MoveStrategy*		moveStratgy;
	AttackStrategy*		attackStratgy;
};



// Context : ��Ʈ��Ƽ�� ������ �̿��ϴ� ���� , �ʿ信 �������� ��ü���� ������ �ٲ�
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

		cout << "���� �ٲٱ�" << endl;

		m_player.attackStratgy = new KickStrategy();
		m_player.moveStratgy = new RunStrategy();

		m_player.attackStratgy->attack();
		m_player.moveStratgy->move();

		delete m_player.attackStratgy;
		delete m_player.moveStratgy;

	}
};