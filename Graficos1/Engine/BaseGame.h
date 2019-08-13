#ifndef BASEGAME_H
#define BASEGAME_H
#define USSR __declspec(dllexport)

class USSR BaseGame
{
public:
	BaseGame();
	int TestFunc(int testInt);
	int GlfwTest();
	~BaseGame();
};
#endif