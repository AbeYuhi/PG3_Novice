#include "InputHander.h"

ICommand* InputHander::HandleInput() {
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_;
	}
	if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA_;
	}

	return nullptr;
}

void InputHander::AssignMoveRightCommand2PressKeyD() {
	ICommand *command = new MoveRightCommand();
	this->pressKeyD_ = command;
}

void InputHander::AssignMoveLeftCommand2PressKeyA() {
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;
}