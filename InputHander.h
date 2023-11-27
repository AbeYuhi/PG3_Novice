#pragma once
#include <Novice.h>
#include "ICommand.h"

class InputHander {
public:
	ICommand* HandleInput();

	void AssignMoveRightCommand2PressKeyD();

	void AssignMoveLeftCommand2PressKeyA();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;

};
