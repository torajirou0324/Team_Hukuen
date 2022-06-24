#pragma once
#include "pch.h"

class EnemyBase
{
public:
	EnemyBase();	//コンスタトラクタ
	virtual ~EnemyBase();			//デストラクタ

	virtual void Load(const char* sourceImageHandle);
	virtual void Update() = 0;		//更新
	virtual void Draw();			//描画

	//イメージハンドルの取得
	int GetImageHandle() { return mImageHandle; }


protected:
	int mImageHandle;	//イメージハンドル
	VECTOR mPos ;//座標
	int mW;//画像サイズX
	int mH;//画像サイズY
	float mSpeed;
	bool mAliveFlag;
};