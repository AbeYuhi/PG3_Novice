#include <Novice.h>
#include "GameManager.h"

const char kWindowTitle[] = "K022G0032";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	GameManager* gameManager = nullptr;
	gameManager = GameManager::GetInstance();
	gameManager->Initialize();

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	gameManager->Run();

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
