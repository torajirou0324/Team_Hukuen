#pragma once
#include"pch.h"
#include <stdlib.h>

class EnemyFromBack : public EnemyBase
{
public:
	void Load(const char* sourceImageHandle);
	void Update(float playerX, float playerY, int playerRow);
	void Draw();
	void CollisionDetection(float playerX, float playerY); //衝突判定
	const float mFirstPosX = 0;//X座標初期位置
	//値は仮
	const float mFirstPosYa = 300;//Y座標初期位置1行目
	const float mFirstPosYb = 500;//Y座標初期位置2行目
	const float mFirstPosYc = 700;//Y座標初期位置3行目
};
