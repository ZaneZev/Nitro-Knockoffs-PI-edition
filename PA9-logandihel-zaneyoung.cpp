// PA9-logandihel-zaneyoung.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "testing.h"
#include "Game.h"

sf::RenderWindow * gameObj  = nullptr;
//extern "C"{
//	__declspec(dllexport) unsigned long NvOptimusEnablement = 0x00000001;
//}


int main()
{
	Game game("Nitro Knockoffs",640,480,30);
	gameObj = &game;
	gameObj->setFramerateLimit(32);
	game.start();

	system("pause");
	return 0;
}
