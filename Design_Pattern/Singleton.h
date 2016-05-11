#include "stdafx.h"

using namespace std;


// 싱글턴(단일체) : 인스턴스가 오직 하나만 생성되는 것을 보장하고 어디에서든 이 인스턴스에 접근 할수 있다.
// 사용법은 여러가지가 있는데 정적 싱글턴 , 동적 싱글턴, 동적 템플릿 패턴 등 여러가지가 있다.
// protect로 생성자가 선언되어 외부에서 생성을 막을 수 있다.
// C++에서는 전역 객체에 대한 생성자에 대한 순서를 정의하지 않는다.
// 많은 패턴이 단일체 패턴으로 구현 가능하다 예: 추상 팩토리, 빌더, 원형 등

class GameManager {
private:
	static GameManager* m_instance;

protected:
	GameManager() {}

public:
	static GameManager* GetInstance()
	{
		if (m_instance == NULL){
			m_instance = new GameManager;
			cout << " 인스턴스를 생성합니다" << endl;
			atexit(Destroy);
		}
		else{
			cout << " 인스턴스가 있으니 그대로 반환합니다." << endl;
		}

		return m_instance;
	}

	static void Destroy()
	{
		delete m_instance;
		m_instance = 0;

	}
};


GameManager* GameManager::m_instance = NULL;

class SingletonClient
{
public:
	void play()
	{
		GameManager::GetInstance();
		GameManager::GetInstance();
	}
};