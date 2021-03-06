#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include "PlayScene.h"
#include "SplashScene.h"
#include "Scene.h"
#include "MenuScene.h"
#include "Game.h"
#include "PlayScene.h"
#include "SplashScene.h"
#include "Scene.h"
#include "MenuScene.h"

extern Scene * CurrentScene;
class SplashScene : public Scene {
protected:

public:
	virtual void update() {
		fCount++;
		if (fCount >= (15 * 3)) {
			text->setScale(sf::Vector2f(1 - ((float)(fCount - 45) / 45.0f), 1 - ((float)(fCount - 45) / 45.0f)));
			text->setRotation(-fCount / 45.f * 360.f);
		}
		if (fCount == (30*3)) {
			//CurrentScene = new MenuScene;
			vector<string> carpath;
			carpath.push_back("./sprites/deborean.png");
			sf::Vector2f temp(4000,2000);
			CurrentScene = new PlayScene(temp, "./maps/racetrack2.png", new map("./maps/racetrack2.svg"),carpath);
			delete this;
		}

	}
	SplashScene() : Scene() {
		fCount = 0;
		font.loadFromFile("./fonts/slope-opera/SlopeOpera.otf");
		text = new sf::Text();
		text->setFont(font);
		text->setCharacterSize(20);
		text->setString("NITRO KNOCKOFFS\n\nFinal Project CPTS 122\n\nLogan Dihel & Zane Young");
		text->setOrigin(sf::Vector2f(0, 0));
		text->setPosition(sf::Vector2f(320, 240));

		// remember that order matters!
		// what's pushed first is drawn first
		drawables.push_back(text);
	}
private:
	int fCount;
	sf::Font font;
	sf::Text *text;
};
#endif
