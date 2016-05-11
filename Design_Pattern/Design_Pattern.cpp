// Design_Pattern.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

