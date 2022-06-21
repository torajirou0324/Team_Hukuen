#pragma once
#include "SceneBase.h"

class Clear :  public SceneBase
{
public:
	// コンストラクタ
	Clear();
	// デストラクタ
	~Clear();
	// 描画
	void Draw()override;
	// 更新
	TAG_SCENE Update()override;

private:
	// タイトルへ戻る文字座標X
	int mReturnStringPosX;
	// タイトルへ戻る文字座標Y
	int mReturnStringPosY;
};

