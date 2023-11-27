#pragma once
#include "IScene.h"
#include "Player.h"
#include "ICommand.h"
#include "InputHander.h"
#include <Novice.h>
#include "Vector2.h"
#include <math.h>

struct Bullet {
	Vector2 pos;
	bool isAlive;
};

class InGameScene : public IScene {
public:
	void Initialize() override;

	void Updata() override;

	void Draw() override;

private:
	InputHander* inputHandler_ = nullptr;
	ICommand* command_ = nullptr;
	Player* player_ = nullptr;
};
