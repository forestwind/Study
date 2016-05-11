#include "stdafx.h"

using namespace std;


// �̱���(����ü) : �ν��Ͻ��� ���� �ϳ��� �����Ǵ� ���� �����ϰ� ��𿡼��� �� �ν��Ͻ��� ���� �Ҽ� �ִ�.
// ������ ���������� �ִµ� ���� �̱��� , ���� �̱���, ���� ���ø� ���� �� ���������� �ִ�.
// protect�� �����ڰ� ����Ǿ� �ܺο��� ������ ���� �� �ִ�.
// C++������ ���� ��ü�� ���� �����ڿ� ���� ������ �������� �ʴ´�.
// ���� ������ ����ü �������� ���� �����ϴ� ��: �߻� ���丮, ����, ���� ��

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
			cout << " �ν��Ͻ��� �����մϴ�" << endl;
			atexit(Destroy);
		}
		else{
			cout << " �ν��Ͻ��� ������ �״�� ��ȯ�մϴ�." << endl;
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