#pragma once
#include "AbstractScene.h"

class BossCharlestonScene : public AbstractScene
{
private:
	std::unique_ptr<Grid> grid;
	std::unique_ptr<Captain> cap;
	std::unique_ptr<Map> mapDark, mapLight; 
	
	float counterBegin = 0.0f;
	float counterEnd = 0.0f;
	void Beginning(float dt);

public:
	BossCharlestonScene();
	void LoadResources () override;
	void Update(float dt) override;
	void Draw          () override;

	void OnKeyUp(BYTE keyCode) override;
	void OnKeyDown(BYTE keyCode) override;
	SoundId GetBgMusic() const override { return SoundId::BossBattle; }
};

