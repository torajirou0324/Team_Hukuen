#pragma once
#include "DxLib.h"

class EnemyBase
{
public:
	EnemyBase(const char* sourceImageHandle);	//コンスタトラクタ
	virtual ~EnemyBase();			//デストラクタ

	virtual void Update() = 0;		//更新
	virtual void Draw();			//描画

	//イメージハンドルの取得
	int GetImageHandle() { return imageHandle; }

	VECTOR inputVec;

protected:
	int imageHandle;	//イメージハンドル
	VECTOR mPos;
	
};