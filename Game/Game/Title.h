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
	TAG_SCENE Update()override;

private:
	// スタート文字画像
	int mStarStringtImage;
	// スタート文字座標X
	int mStartStringPosX;
	// スタート文字座標Y
	int mStartStringPosY;

	// 雲の画像
	int mCloudImage;
	// 雲１の座標X
	int mCloud1PosX;
	// 雲１の座標Y
	int mCloud1PosY;
	// 雲２の座標X
	int mCloud2PosX;
	// 雲２の座標Y
	int mCloud2PosY;

	// カウント
	int mCount;
	// 雲のスピード
	int mCloudSpeed;
	// 雲が動く範囲
	int mCloudRange;
	// 雲をスムーズに動かす
	int mSmoothMove;

};

