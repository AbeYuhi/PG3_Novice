#pragma once

enum Scene {
	TITLE, INGAME, CLEAR, SCENENUM
};

class IScene {
protected:
	static int sceneNo;

public:
	
	virtual void Initialize() = 0;
	virtual void Updata(const char* keys, const char* preKeys) = 0;
	virtual void Draw() = 0;

	virtual ~IScene();

	inline int GetSceneNo() { return sceneNo; }
};
