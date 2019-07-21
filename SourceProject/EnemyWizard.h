#pragma once
#include "Enemy.h"

class EnemyWizard : public Enemy
{
private:
	static constexpr float WALKING_SPEED = 80.0f;
	static constexpr float FLYING_SPEED = 80.0f;
	static constexpr float FALL_BACK = 70.0f;

	Captain& cap;
public:
	EnemyWizard(Behaviors behavior, Data&& behaviorData, Vector2 spawnPos, Vector2 vel, int nx, Grid * grid, Captain& cap);
	void SetState(State state) override;
	void SpawnBullet();
	void Update(float dt, const std::vector<GameObject*>& coObjects) override;
	void SpawnBulletFire();
	void testing(Window &win); //only use for testing
};

