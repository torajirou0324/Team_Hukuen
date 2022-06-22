#pragma once
#include"pch.h"
#include <stdlib.h>

class EnemyFromBack : public EnemyBase
{
public:
	void Load(const char* sourceImageHandle);
	void Update(float playerX, float playerY, int playerRow);
	void Draw();
	void CollisionDetection(float playerX, float playerY); //�Փ˔���
	const float mFirstPosX = 0;//X���W�����ʒu
	//�l�͉�
	const float mFirstPosYa = 300;//Y���W�����ʒu1�s��
	const float mFirstPosYb = 500;//Y���W�����ʒu2�s��
	const float mFirstPosYc = 700;//Y���W�����ʒu3�s��
};
