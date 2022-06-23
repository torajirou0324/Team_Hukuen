#include "pch.h"
//コンストラクタ
Player::Player()
{
	mImgHandle = -1;

	mSpeed = 5.0f;
	mPlayerX = 0;
	mPlayerY = 0;
	mPushBotton = FALSE;
	mCollisionFlag = FALSE;

	Load();
}

//デストラクタ
Player::~Player()
{

}

//プレイヤー画像プリロード
void Player::Load()
{
	mImgHandle = LoadGraph("img/player.png");
	//GetGraphSize(mImgHandle, &mWidth, &mHeight);
}

//プレイヤー移動処理
void Player::Update()
{
	if (mPlayerMoveUpFlag)
	{
		mPlayerY--;
	}
	else if (mPlayerMoveDownFlag)
	{
		mPlayerY++;
	}
	else if (mPlayerMoveRightFlag)
	{
		mPlayerX++;
	}
}

//アイテム使用確認処理
void Player::UsingItem()
{

}

//エネミーとの当たり判定
void Player::CollisionEnemy(float enemyPosX, float enemyPosY, int enemyWide, int enemyHeight)
{
	if (((mPlayerX > enemyPosX && mPlayerX < enemyPosX + enemyWide) ||
		(enemyPosX > mPlayerX && enemyPosX < mPlayerX + PLAYER_WIDTH)) &&
		((enemyPosY > enemyPosY && mPlayerY < enemyPosY + enemyHeight) ||
			(enemyPosY > mPlayerY && enemyPosY < mPlayerY + PLAYER_HEIGHT)))
	{
		mCollisionFlag = TRUE;
	}
}

//プレイヤーを描画する
void Player::Draw()
{
	DrawGraph(mPlayerX, mPlayerY, mImgHandle, TRUE);
}

