#pragma once
#include <memory>
#include <Novice.h>
#include "IScene.h"
#include "TitleScene.h"
#include "InGameScene.h"
#include "GameClearScene.h"

class GameManager {
public:

	static GameManager* GetInstance();

	void Initialize();

	int Run();

private:
	GameManager() = default;
	~GameManager() = default;

	std::unique_ptr<IScene> sceneArr_[SCENENUM];

	int currentSceneNo_;
	int preSceneNo_;

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};
};
