#include "EnemyBase.h"
#include "pch.h"


EnemyBase::EnemyBase()
	 
{
	mImageHandle = -1;				// 画像ハンドルの初期化.
	mPos = VGet(0.0f, 0.0f, 0.0f);		//ポジションの初期化
	mW = 0;							// 画像の縦幅の初期化.
	mH = 0;							// 画像の横幅の初期化.
	mSpeed = 0;						//スピードの初期化
	mAliveFlag = false;				//AliveFlagの初期化
}

EnemyBase::~EnemyBase()
{
	DeleteGraph(mImageHandle);//アンロード
}

void EnemyBase::Load(const char* sourceImageHandle)
{
	mImageHandle = LoadGraph(sourceImageHandle);//画像のプリロード
	if (mImageHandle < 0)
	{
		printfDx("データ読み込みに失敗 sourceId:%d", sourceImageHandle);
		return;
	}
	GetGraphSize(mImageHandle, &mW, &mH);//画像サイズ取得
}

void EnemyBase::Draw()
{
}
