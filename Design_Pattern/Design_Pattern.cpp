// Design_Pattern.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Strategy.h"
#include "Singleton.h"
#include "State.h"
#include "Command.h"

int _tmain(int argc, _TCHAR* argv[])
{
	StrategyClient strategyClient;

	strategyClient.Play();

	cout << endl;

	SingletonClient singletonClient;

	singletonClient.play();

	cout << endl;


	StateClient stateClient;

	stateClient.Play();

	cout << endl;

	
	CommandClient commandClient;
	
	commandClient.Play();

	cout << endl;
	return 0;
}

