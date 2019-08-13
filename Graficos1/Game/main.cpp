#include <iostream>
#include "Game.h"
#include "BaseGame.h"
using namespace std;

int main() {
	BaseGame game;
	cout <<game.TestFunc(5)<<endl;
	fflush(stdin);
	cin.get();
	return 0;
}