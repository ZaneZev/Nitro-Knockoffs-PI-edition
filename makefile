output:PA9-logandihel-zaneyoung.o SplashScreen.o stdafx.o SVGParser.o Car.o Game.o LocalPlayer.o Menu.o Player.o RigidBody2.o Scene.o SocketManager.o
	g++ PA9-logandihel-zaneyoung.o Car.o Game.o LocalPlayer.o Menu.o Player.o RigidBody2.o Scene.o SplashScreen.o stdafx.o SVGParser.o SocketManager.o -o Nitro -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network -lsfml-audio

PA9-logandihel-zaneyoung.o:	PA9-logandihel-zaneyoung.cpp SplashScene.h testing.h Button.h MenuScene.h numPlayerSelectScene.h PauseMenu.h SocketManager.h PlayScene.h CarPickerScene.h CarSelectScene.h map.h MapParser.h
	g++ -c PA9-logandihel-zaneyoung.cpp

Car.o:Car.cpp Car.h
	g++ -c Car.cpp

Game.o:Game.cpp Game.h
	g++ -c Game.cpp

LocalPlayer.o:LocalPlayer.cpp LocalPlayer.h
	g++ -c LocalPlayer.cpp

Menu.o:Menu.cpp Menu.h
	g++ -c Menu.cpp

Player.o : Player.cpp Player.h
	g++ -c Player.cpp

RigidBody2.o:RigidBody2.cpp RigidBody2.h
	g++ -c RigidBody2.cpp

Scene.o:Scene.cpp Scene.h
	g++ -c Scene.cpp

SplashScreen.o:SplashScreen.cpp SplashScreen.h
	g++ -c SplashScreen.cpp

stdafx.o:stdafx.cpp stdafx.h
	g++ -c stdafx.cpp

SVGParser.o:SVGParser.cpp SVGParser.h
	g++ -c SVGParser.cpp

SocketManager.o:SocketManager.cpp SocketManager.h
	g++ -c SocketManager.cpp