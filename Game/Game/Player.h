#pragma once

#define PLAYER_WIDTH 64
#define PLAYER_HEIGHT 64

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
	void Update();
	//プレイヤー描画
	void Draw();

	//アイテム使用確認処理
	void UsingItem();

	//エネミーとの当たり判定
	void CollisionEnemy(float enmeyPosX, float enemyPosY, int enemyWide, int enemyHeight);

	
	//セッター
	void SetPosX(const int& _posX) { mPlayerX = _posX; }
	void SetCollisionFlag(const bool& _Flag) { mCollisionFlag = _Flag; }
	void SetSpeed(const float& _speed) { mSpeed = _speed; }
	void SetMoveUpFlag(const bool& _UpFlag) { mPlayerMoveUpFlag = _UpFlag; }
	void SetMoveDownFlag(const bool& _DownFlag) { mPlayerMoveDownFlag = _DownFlag; }
	void SetMoveRightFlag(const bool& _RightFlag) { mPlayerMoveRightFlag = _RightFlag; }
	//ゲッター
	const int& GetPosX() const { return mPlayerX; }
	const int& GetPosY() const { return mPlayerY; }
	const float& GetSpeed() const { return mSpeed; }

private:
	
	//プレイヤー画像
	int mImgHandle;
	//プレイヤー画像の縦幅、横幅（ピクセル単位）
	int mPlayerX, mPlayerY;
	//プレイヤー移動速度
	float mSpeed;

	//ボタン押しているかのフラグ
	bool mPushBotton;

	//それぞれのボタンのフラグ
	bool mPlayerMoveUpFlag;
	bool mPlayerMoveDownFlag;
	bool mPlayerMoveRightFlag;

	//敵と接触しているかのフラグ
	bool mCollisionFlag;
	

};
