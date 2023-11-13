#pragma once
#include "IScene.h"
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

	void Updata(const char* keys, const char* preKeys) override;

	void Draw() override;

private:
	Vector2 enemyPos_;
	Vector2 playerPos_;
	Bullet playerBullets[100];
};
