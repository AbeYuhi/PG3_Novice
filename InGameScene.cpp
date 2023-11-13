#include "InGameScene.h"

void InGameScene::Initialize() {
	enemyPos_ = {800, 360};
	playerPos_ = {200, 360};
	for (int i = 0; i < 100; i++) {
		playerBullets[i].isAlive = false;
	}
}

void InGameScene::Updata(const char* keys, const char* preKeys) {

	//移動
	if (keys[DIK_A]) {
		playerPos_.x -= 5;
	}
	if (keys[DIK_D]) {
		playerPos_.x += 5;
	}
	if (keys[DIK_W]) {
		playerPos_.y -= 5;
	}
	if (keys[DIK_S]) {
		playerPos_.y += 5;
	}

	//ショット
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		for (int i = 0; i < 100; i++) {
			if (!playerBullets[i].isAlive) {
				playerBullets[i].isAlive = true;
				playerBullets[i].pos = playerPos_;
				break;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		if (playerBullets[i].isAlive) {
			playerBullets[i].pos.x += 10;
		}
	}

	//当たり判定
	for (int i = 0; i < 100; i++) {
		if (playerBullets[i].isAlive) {
			float length = sqrtf(
			    powf(enemyPos_.x - playerBullets[i].pos.x, 2)
				+ powf(enemyPos_.y - playerBullets[i].pos.y, 2));

			if (length <= 80) {
				sceneNo = CLEAR;			
			}
		}
	}
}

void InGameScene::Draw() {
	Novice::ScreenPrintf(0, 0, "Player : RED, Enemy::WHITE");
	Novice::DrawBox((int)enemyPos_.x - 50, (int)enemyPos_.y - 50, 100, 100, 0, WHITE, kFillModeSolid);
	Novice::DrawBox((int)playerPos_.x - 50, (int)playerPos_.y - 50, 100, 100, 0, RED, kFillModeSolid);
	for (int i = 0; i < 100; i++) {
		if (playerBullets[i].isAlive) {
			Novice::DrawEllipse((int)playerBullets[i].pos.x, (int)playerBullets[i].pos.y, 25, 25, 0, RED, kFillModeSolid);
		}
	}
}