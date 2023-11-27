#pragma once
#include <Novice.h>
#include "Vector2.h"

class Player {
public:
	Player();
	~Player();

	void Initialize();

	void Update();

	void Draw();

	void MoveRight();
	void MoveLeft();

private:
	Vector2 pos_;
	Vector2 size_;
	Vector2 speed_;
};