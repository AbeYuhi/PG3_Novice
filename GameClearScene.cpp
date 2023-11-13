#include "GameClearScene.h"

void GameClearScene::Initialize() {
	cooldown_ = 10;
}

void GameClearScene::Updata(const char* keys, const char* preKeys) {
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE] && cooldown_ <= 0) {
		sceneNo = TITLE;
	}
	cooldown_--;
}

void GameClearScene::Draw() {
	Novice::ScreenPrintf(640, 360, "Push Space");
}