// Design_Pattern.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Strategy.h"
#include "Singleton.h"

int _tmain(int argc, _TCHAR* argv[])
{
	StrategyClient strategyClient;

	strategyClient.Play();

	cout << endl;

	SingletonClient singletonClient;

	singletonClient.play();

	return 0;
}

