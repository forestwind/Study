// Design_Pattern.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

