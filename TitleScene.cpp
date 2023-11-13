#include "TitleScene.h"

void TitleScene::Initialize() {
	cooldown_ = 10;
}

void TitleScene::Updata(const char* keys, const char* preKeys) {
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE] && cooldown_ <= 0) {
		sceneNo = INGAME;
	}
	cooldown_--;
}

void TitleScene::Draw() {
	Novice::ScreenPrintf(640, 360, "Push Space");
}