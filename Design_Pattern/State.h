#include "stdafx.h"

using namespace std;

//����(state) ����: ���¿� ���� ������ �۾�(������Ʈ,������)�� �ٸ� ������� ����� �� �ش� ���°� �۾��� �����ϵ��� �����ϴ� ������ ����
//					��ü�� ���λ��¿� ���� ������ �ൿ�� ���� �Ҽ� �ְ� �㰡�ϴ� ����, ��ü�� ��ġ �ڽ��� Ŭ������ �ٲٴ� ��ó�� ����


// ���� ���ϰ��� ������ : ����(Strategy)�� ���� ������� ������ ����(state) ������ ���� ����ȴ�.
//						  ������ �����ϴ� ��ü ����(Strategy): Client , ����(state) : State1,2 (������ ������ ��ü)
//						  ����(state)�� Ŭ���̾�Ʈ�� ���������� ��, ����(Strategy)�� Ŭ���̾�Ʈ�� ���������� �˰��ִ�.


// State : �ý����� ��� ���¿� ���� �������̽��� ����, �� �������̽��� ��üȭ�� � ���� Ŭ������ ���� ���� Ŭ������ ����� ��ü�ؼ� ��밡��
class State{
public:
	virtual void Update() {}
	virtual void Render() {}
};


// State1,.State2.. : Context ��ü�� ��û�� �۾��� �ڽ��� ������� ���� ����, ��κ��� ��� ���� ���¸� ������ ���º����� Context ��ü�� ��û�ϴ� ���� ����
class ReadyState : public State
{
public:
	virtual void Update() { cout << "������¸� ������Ʈ �մϴ�" << endl; }
	virtual void Render() { cout << "������¸� ������ �մϴ�" << endl; }
};

class PlayState : public State
{
public:
	virtual void Update() { cout << "�÷��̻��¸� ������Ʈ �մϴ�" << endl; }
	virtual void Render() { cout << "�÷��̻��¸� ������ �մϴ�" << endl; }
};

class EndState : public State
{
public:
	virtual void Update() { cout << "������¸� ������Ʈ �մϴ�" << endl; }
	virtual void Render() { cout << "������¸� ������ �մϴ�" << endl; }
};

// Context : State�� �̿��ϴ� ���� ���� , ���� �ý����� ���¸� ��Ÿ���� ���º����� ���� �ý����� ���¸� �����ϴ� �������� ������ �ִ�.
// �� ���� Ŭ�������� ���� ������ ��û�� ���¸� �ٲ� �� �ֵ��� �ϴ� �޼���(setState) ����

class StateManager{
private:
	State* state;

public:
	StateManager() { state = new ReadyState(); }
	~StateManager() { delete state; }

	void setState(State* state)
	{
		delete this->state;
		this->state = state;
	}
	
	// Request : ���� ������ �����ϴ� ��� �ش� ���� ��ü�� ���� ������ ����
	void Update()
	{
		this->state->Update();
	}

	void Render()
	{
		this->state->Render();
	}

};


class StateClient{
public:
	void Play()
	{
		StateManager stateManager;

		stateManager.Update();
		stateManager.Render();

		cout << "�÷��� ���·� ����" << endl;

		stateManager.setState(new PlayState);
		stateManager.Update();
		stateManager.Render();

		cout << "���� ���·� ����" << endl;
		
		stateManager.setState(new EndState);
		stateManager.Update();
		stateManager.Render();


	}
};