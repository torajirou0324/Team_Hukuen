
#include "EnemyFromBack.h"

#include"pch.h"

void EnemyFromBack::Update(float playerX, float playerY, int playerRow)
{
	mPos.x = mFirstPosX;
	if (!mAliveFlag)
	{
		mPos.y;
	}
	else
	{
		mPos.x += mSpeed;
		if (mPos.x > WINDOW_WIDTH)
		{
			mAliveFlag = false;
		}
	}
}

void EnemyFromBack::Draw()
{
	DrawGraphF(mPos.x, mPos.y, mImageHandle, true);
}

void EnemyFromBack::CollisionDetection(float playerX, float playerY)
{
	if (mAliveFlag && mPos.y == playerY)
	{
		if ((mPos.x + mW) < playerX)
		{
			//“–‚½‚Á‚½
		}
	}
}

