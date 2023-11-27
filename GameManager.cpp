#include "GameManager.h"

GameManager* GameManager::GetInstance() {
	static GameManager gameManager;
	return &gameManager;
}

void GameManager::Initialize() {
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[INGAME] = std::make_unique<InGameScene>();
	sceneArr_[CLEAR] = std::make_unique<GameClearScene>();

	currentSceneNo_ = INGAME;
	sceneArr_[currentSceneNo_]->Initialize();
}

int GameManager::Run() { // ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();
		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		preSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();
		if (preSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Initialize();
		}

		//更新処理
		sceneArr_[currentSceneNo_]->Updata();

		//描画処理
		sceneArr_[currentSceneNo_]->Draw();

		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}
	return 0;
}