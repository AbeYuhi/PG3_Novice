#pragma once

enum Scene {
	TITLE, INGAME, CLEAR, SCENENUM
};

class IScene {
protected:
	static int sceneNo;

public:
	
	virtual void Initialize() = 0;
	virtual void Updata() = 0;
	virtual void Draw() = 0;

	virtual ~IScene();

	inline int GetSceneNo() { return sceneNo; }
};
