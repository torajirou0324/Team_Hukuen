#pragma once
#include "SceneBase.h"
class Result : public SceneBase
{
public:
	// コンストラクタ
	Result();
	// デストラクタ
	~Result();

	TAG_SCENE Update();
	void Draw();

private:

	// タイトルへ戻る文字座標X
	int mReturnStringPosX;
	// タイトルへ戻る文字座標Y
	int mReturnStringPosY;

};

