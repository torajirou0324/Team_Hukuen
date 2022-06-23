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
void Player::Update()
{
	//それぞれのボタンの座標と立幅、横幅
	int rightBottunX = 0, rightBottunY = 0, rightBottunW = 0, rightBottunH = 0;
	int leftBottunX = 0, leftBottunY = 0, leftBottunW = 0, leftBottunH = 0;
	int upBottunX = 0, upBottunY = 200, upBottunW = 100, upBottunH = 100;

	//マウスポインタのX座標とY座標
	int mouseX, mouseY;
	//マウスポインタの現在位置の取得
	GetMousePoint(&mouseX, &mouseY);

	//マウス左ボタンが押されてなければ
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) == 0)
	{
		mPushBotton = FALSE;
	}
	//右移動
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && 
		((mouseX < rightBottunX && mouseX > rightBottunX + rightBottunW) &&
		(mouseY < rightBottunY && mouseY > rightBottunY + rightBottunH)) && 
		mPushBotton == FALSE)
	{
		mPushBotton = TRUE;
	}
	//上移動
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && 
		((mouseX > upBottunX && mouseX < upBottunX + upBottunW) ||
		(mouseY > upBottunY && mouseY < upBottunY + upBottunH)) &&
		mPushBotton == FALSE)
	{
		if (mPos.y < 200)
		{
			mPos.y -= mSpeed;
		}
		else
		{
			mPushBotton = TRUE;
		}
	}//下移動
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && 
		((mouseX < leftBottunX && mouseX > leftBottunX + leftBottunW) &&
		(mouseY < leftBottunY && mouseY > leftBottunY + leftBottunH)) &&
		mPushBotton == FALSE)
	{
		if (mPos.y < 150)
		{
			mPos.y += mSpeed;
		}
		else
		{
			mPushBotton = TRUE;
		}
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
		mCollisionFlag = TRUE;
	}
}

//プレイヤーを描画する
void Player::Draw()
{
	DrawGraph(mPos.x, mPos.y, mImgHandle, TRUE);
}

