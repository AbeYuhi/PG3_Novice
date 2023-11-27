#include "TitleScene.h"

void TitleScene::Initialize() {
	sceneNo = TITLE;

	cooldown_ = 10;
}

void TitleScene::Updata() {

}

void TitleScene::Draw() {
	Novice::ScreenPrintf(640, 360, "Push Space");
}