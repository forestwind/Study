#include "stdafx.h"

using namespace std;

//상태(state) 패턴: 상태에 따라 동일한 작업(업데이트,렌더링)이 다른 방식으로 실행될 때 해당 상태가 작업을 수행하도록 위임하는 디자인 패턴
//					객체의 내부상태에 따라 스스로 행동을 변경 할수 있게 허가하는 패턴, 객체는 마치 자신의 클래스를 바꾸는 것처럼 보임


// 전략 패턴과의 차이점 : 전략(Strategy)은 자주 변경되지 않지만 상태(state) 패턴은 자주 변경된다.
//						  행위를 변경하는 주체 전략(Strategy): Client , 상태(state) : State1,2 (실제로 구현된 객체)
//						  상태(state)는 클라이언트가 상태정보를 모름, 전략(Strategy)은 클라이언트가 상태정보를 알고있다.


// State : 시스템의 모든 상태에 공통 인터페이스를 제공, 이 인터페이스를 실체화한 어떤 상태 클래스도 기존 상태 클래스를 대신해 교체해서 사용가능
class State{
public:
	virtual void Update() {}
	virtual void Render() {}
};


// State1,.State2.. : Context 객체가 요청한 작업을 자신의 방식으로 실제 실행, 대부분의 경우 다음 상태를 결정해 상태변경을 Context 객체에 요청하는 역할 수행
class ReadyState : public State
{
public:
	virtual void Update() { cout << "레디상태를 업데이트 합니다" << endl; }
	virtual void Render() { cout << "레디상태를 렌더링 합니다" << endl; }
};

class PlayState : public State
{
public:
	virtual void Update() { cout << "플레이상태를 업데이트 합니다" << endl; }
	virtual void Render() { cout << "플레이상태를 렌더링 합니다" << endl; }
};

class EndState : public State
{
public:
	virtual void Update() { cout << "엔드상태를 업데이트 합니다" << endl; }
	virtual void Render() { cout << "엔드상태를 렌더링 합니다" << endl; }
};

// Context : State를 이용하는 역할 수행 , 현재 시스템의 상태를 나타내는 상태변수와 실제 시스템의 상태를 구성하는 여러가지 변수가 있다.
// 각 상태 클래스에서 상태 변경을 요청해 상태를 바꿀 수 있도록 하는 메서드(setState) 제공

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
	
	// Request : 실제 행위를 실행하는 대신 해당 상태 객체에 행위 실행을 위임
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

		cout << "플레이 상태로 변경" << endl;

		stateManager.setState(new PlayState);
		stateManager.Update();
		stateManager.Render();

		cout << "엔드 상태로 변경" << endl;
		
		stateManager.setState(new EndState);
		stateManager.Update();
		stateManager.Render();


	}
};