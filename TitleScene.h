#pragma once
#include "IScene.h"
#include <Novice.h>

class TitleScene : public IScene {
public:
	void Initialize() override;

	void Updata() override;

	void Draw() override;

private:
	int cooldown_;
};
