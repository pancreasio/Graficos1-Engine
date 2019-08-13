#include <iostream>
#include "Game.h"
#include "BaseGame.h"
using namespace std;

int main() {
	BaseGame game;
	game.GlfwTest();
	fflush(stdin);
	cin.get();
	return 0;
}