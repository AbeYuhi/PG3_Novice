#include "GameClearScene.h"

void GameClearScene::Initialize() {
	sceneNo = CLEAR;

	cooldown_ = 10;
}

void GameClearScene::Updata() {
}

void GameClearScene::Draw() {
	Novice::ScreenPrintf(640, 360, "Push Space");
}