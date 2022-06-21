#include "EnemyBase.h"

EnemyBase::EnemyBase(const char* sourceImageHandle)
	: imageHandle(-1)
{
	imageHandle = LoadGraph(sourceImageHandle);//画像のプリロード
	if (imageHandle < 0)
	{
		printfDx("データ読み込みに失敗 sourceId:%d", sourceImageHandle);
	}
}

EnemyBase::~EnemyBase()
{
	DeleteGraph(imageHandle);//アンロード
}

void EnemyBase::Draw()
{
	DrawRotaGraphF(mPos.x, mPos.y, 0, 0, imageHandle, false);//描画（回転あり）
	//DrawGraphF(mPos.x, mPos.y, imageHandle, false);//描画（回転なし）
}
