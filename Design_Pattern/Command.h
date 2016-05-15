#include "stdafx.h"

using namespace std;

//Ŀ�ǵ�(Command) ���� : �̺�Ʈ�� �߻����� �� ����� ����� �پ��ϸ鼭�� ������ �ʿ��� ��쿡 �̺�Ʈ�� �߻���Ű�� Ŭ������ �������� �ʰ� �����ϰ�
//						 �� �Ҷ� �����ϴ�.
//					����� ����� ĸ��ȭ �����μ� ����� ������ �䱸�ϴ� ȣ���� Ŭ������ ���� ����� �����ϴ� ������ Ŭ���� ������ �������� ����


//Command : ����� ��ɿ� ���� �������̽�. ����� ����� Excute �޼���� ������ 
class Command{
public:
	virtual void Excute() {}
};


// invoker: ����� ������ ��û�ϴ� ȣ���� Ŭ����
class Attack{
private:
	Command* theCommand;
public:
	Attack(Command* theCommand)	// ������ 
	{ 	
		SetCommand(theCommand);
	}

	void SetCommand(Command* newCommand)
	{
		this->theCommand = newCommand;
	}
	
	void Excute()		// Ŀ�ǵ��� Excute �޼��� ȣ��
	{
		theCommand->Excute();
	}
};

// Receiver : ConcreteCommand���� excute �޼����� ���� �� �� �ʿ��� Ŭ���� . �� ConcreteCommand�� ����� �����ϱ� ���� ����ϴ� ������ Ŭ����
class Player{
public:
	void DashAction() { cout << "ĳ���Ͱ� �����մϴ�" << endl; }
};

// ConcreteCommand: ������ ����Ǵ� ����� ����
class PlayerOnCommand : public Command{
private :
	Player* thePlayer;
	
public:

	PlayerOnCommand(Player* theplayer)
	{
		thePlayer = theplayer;
	}
	void Excute()
	{
		thePlayer->DashAction();
	}
};

class Enemy{
public:
	void WalkAction() { cout << "���� �ɾ�ϴ�" << endl; }
};

class EnemyOnCommand : public Command{
private:
	Enemy* theEnemy;

public:
	EnemyOnCommand(Enemy* theenemy)
	{
		theEnemy = theenemy;
	}
	void Excute()
	{
		theEnemy->WalkAction();
	}
};


class CommandClient{
public:
	void Play()
	{
		Player* player = new Player;
		Command* playerOnCommand = new PlayerOnCommand(player);

		Attack* attack1 = new Attack(playerOnCommand);
		attack1->Excute();


		Enemy* enemy = new Enemy;
		Command* enemyOnCommand = new EnemyOnCommand(enemy);


		Attack* attack2 = new Attack(enemyOnCommand);
		attack2->Excute();


		attack1->SetCommand(playerOnCommand);
		attack1->Excute();
	}
};