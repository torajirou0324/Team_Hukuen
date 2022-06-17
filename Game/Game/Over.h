#pragma once
#include "SceneBase.h"

class Over : public SceneBase
{
public:
	// コンストラクタ
	Over();
	// デストラクタ
	~Over();
	// 描画
	void Draw()override;
	// 更新
	SceneBase* Update()override;

private:
	// タイトルへ戻る文字座標X
	int mRetryStringPosX;
	// タイトルへ戻る文字座標Y
	int mRetryStringPosY;
};

