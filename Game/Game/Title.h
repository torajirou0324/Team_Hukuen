#pragma once
#include "SceneBase.h"

class Title : public SceneBase
{
public:
	// コンストラクタ
	Title();
	// デストラクタ
	~Title();
	// 描画
	void Draw()override;
	// 更新
	SceneBase* Update()override;

private:
	// スタート文字座標X
	int mStartStringPosX;
	// スタート文字座標Y
	int mStartStringPosY;

};

