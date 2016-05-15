#include "stdafx.h"

using namespace std;

//커맨드(Command) 패턴 : 이벤트가 발생했을 때 실행될 기능이 다양하면서도 변경이 필요한 경우에 이벤트를 발생시키는 클래스를 변경하지 않고 재사용하고
//						 자 할때 유용하다.
//					실행될 기능을 캡슐화 함으로서 기능의 실행을 요구하는 호출자 클래스와 실제 기능을 수행하는 수신자 클래스 사이의 의존성을 제거


//Command : 실행될 기능에 대한 인터페이스. 실행될 기능을 Excute 메서드로 구현함 
class Command{
public:
	virtual void Excute() {}
};


// invoker: 기능의 실행을 요청하는 호출자 클래스
class Attack{
private:
	Command* theCommand;
public:
	Attack(Command* theCommand)	// 생성자 
	{ 	
		SetCommand(theCommand);
	}

	void SetCommand(Command* newCommand)
	{
		this->theCommand = newCommand;
	}
	
	void Excute()		// 커맨드의 Excute 메서드 호출
	{
		theCommand->Excute();
	}
};

// Receiver : ConcreteCommand에서 excute 메서스를 구현 할 때 필요한 클래스 . 즉 ConcreteCommand의 기능을 실행하기 위해 사용하는 수신자 클래스
class Player{
public:
	void DashAction() { cout << "캐릭터가 돌격합니다" << endl; }
};

// ConcreteCommand: 실제로 실행되는 기능을 구현
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
	void WalkAction() { cout << "적이 걸어갑니다" << endl; }
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