#include "InGameScene.h"

void InGameScene::Initialize() {
	sceneNo = INGAME;

	inputHandler_ = new InputHander();
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	player_ = new Player();
	player_->Initialize();
}

void InGameScene::Updata() {
	command_ = inputHandler_->HandleInput();

	if(this->command_) {
		command_->Exec(*player_);
	}
	
	player_->Update();
}

void InGameScene::Draw() {
	player_->Draw();
}