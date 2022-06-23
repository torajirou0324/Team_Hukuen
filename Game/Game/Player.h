#pragma once
#include"pch.h"

class SceneManager;

class Player
{
public:
	//コンストラクタ
	Player();
	//デストラクタ
	~Player();

	//プレイヤー初期位置設定
	void SetPosition(float posx, float posy);
	//プレイヤー画像読み込み
	void Load();
	//プレイヤー移動処理
	void Update(float moveMapLeftSpeed);
	//プレイヤー描画
	void Draw();

	//アイテム使用確認処理
	void UsingItem();

	//エネミーとの当たり判定
	void CollisionEnemy(float enmeyPosX, float enemyPosY, int enemyWide, int enemyHeight);

	
	//セッター
	void SetPosX(const int& _posX) { mWidth = _posX; }
	void SetCollisionFlag(const bool& _Flag) { mCollisionFlag = _Flag; }
	void SetSpeed(const float& _speed) { mSpeed = _speed; }
	//ゲッター
	const int& GetPosX() const { return mWidth; }
	const int& GetPosY() const { return mHeight; }
	const float& GetSpeed() const { return mSpeed; }

private:
	//プレイヤー位置
	VECTOR mPos;
	//プレイヤー画像
	int mImgHandle;
	//プレイヤー画像の立幅、横幅（ピクセル単位）
	int mHeight, mWidth;
	//プレイヤー移動速度
	float mSpeed;

	//ボタン押しているかのフラグ
	bool mPushBotton;

	//敵と接触しているかのフラグ
	bool mCollisionFlag;
	

};
