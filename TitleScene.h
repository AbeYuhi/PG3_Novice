#pragma once
#include "IScene.h"
#include <Novice.h>

class TitleScene : public IScene {
public:
	void Initialize() override;

	void Updata(const char* keys, const char* preKeys) override;

	void Draw() override;

private:
	int cooldown_;
};
