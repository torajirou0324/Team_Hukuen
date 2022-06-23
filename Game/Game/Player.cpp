#include "pch.h"
//コンストラクタ
Player::Player()
{
	mPos.x = 0.0f;
	mPos.y = 0.0f;
	mPos.z = 0.0f;

	mImgHandle = -1;

	mSpeed = 5.0f;
	mHeight = 0;
	mWidth = 0;
	mPushBotton = FALSE;
	mCollisionFlag = FALSE;
}

//デストラクタ
Player::~Player()
{

}

//プレイヤー画像プリロード
void Player::Load()
{
	mImgHandle = LoadGraph("img/player.png");
	GetGraphSize(mImgHandle, &mWidth, &mHeight);
}

//プレイヤー移動処理
void Player::Update(float moveMapleftSpeed)
{
	int mouseX, mouseY;
	GetMousePoint(&mouseX, &mouseY);
	//マウス左ボタンが押されてなければ
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) == 0)
	{
		mPushBotton = FALSE;
	}
	//右移動
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && mouseX > 500 && mPushBotton == FALSE)
	{
		moveMapleftSpeed = GetSpeed();
		mPushBotton = TRUE;
	}
	//上移動
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && (mouseX < 500 && mouseY < 200) && mPushBotton == FALSE)
	{
		
		mPos.y -= mSpeed;
		mPushBotton = TRUE;
	}//下移動
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && (mouseX < 500 && mouseY > 200) && mPushBotton == FALSE)
	{
		mPos.y += mSpeed;
		mPushBotton = TRUE;
	}
	
	
}

//アイテム使用確認処理
void Player::UsingItem()
{
}

//プレイヤーの座標を設定する
void Player::SetPosition(float posx, float posy)
{
	mPos.x = posx;
	mPos.y = posy;
}

//エネミーとの当たり判定
void Player::CollisionEnemy(float enemyPosX, float enemyPosY, int enemyWide, int enemyHeight)
{
	if (((mPos.x > enemyPosX && mPos.x < enemyPosX + enemyWide) ||
		(enemyPosX > mPos.x && enemyPosX < mPos.x + mWidth)) &&
		((enemyPosY > enemyPosY && mPos.y < enemyPosY + enemyHeight) ||
			(enemyPosY > mPos.y && enemyPosY < mPos.y + mHeight)))
	{
		
	}
}

//プレイヤーを描画する
void Player::Draw()
{
	DrawGraph(mPos.x, mPos.y, mImgHandle, TRUE);
}

