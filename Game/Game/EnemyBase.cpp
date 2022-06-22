#include "EnemyBase.h"
#include "pch.h"


EnemyBase::EnemyBase()
	: mImageHandle(-1)
{
	
	mPos = { 0, 0, 0 };
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
