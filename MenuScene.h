#ifndef MENUSCENE_H
#define MENUSCENE_H

#include "Button.h"
#include "testing.h"
#include "Scene.h"
#include "Game.h"
#include "map.h"
#include "CarSelectScene.h"
#include "PlayScene.h"
#include "numPlayerSelectScene.h"

extern Scene * CurrentScene;
extern sf::RenderWindow * gameObj;

class MenuScene :public Scene {
public:
	MenuScene() : Scene() {
		int btnW =300;
		int btnH = 100;
		Button * temp = new Button(sf::Color(0, 255, 255, 255), sf::Color::Blue,sf::Color(100,255,255,255),"Play",sf::Vector2f(((gameObj->getSize().x-btnW)/2), ((gameObj->getSize().y - btnH) / 2)), sf::Vector2f(btnW, btnH),0);
		btns.push_back(temp);
		drawables.push_back(temp);
	}
	virtual void update() {
		sf::Vector2i mouseLoc = sf::Mouse::getPosition(*gameObj);
		bool leftMouse = sf::Mouse::isButtonPressed(sf::Mouse::Button::Left);
		for (Button * btn : btns){
			if (btn->checkMouse(mouseLoc, leftMouse)) {
				switch (btn->getId()) {
				case 0:
					//CurrentScene = new PlayScene(sf::Vector2f(4000, 2000), "./maps/racetrack2.png",new map("./maps/racetrack2.svg"));
					//CurrentScene = new CarSelectScene();
					CurrentScene = new numPlayerSelectScene;
					delete this;
					return;
				}
			}
		}
	}
	~MenuScene() {
		for (Button * btn : btns) {
			btn = nullptr;
		}
	}
private:
	std::vector<Button *> btns;
};
#endif // MENUSCENE_H
