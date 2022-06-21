#pragma once
#include "SceneBase.h"
class SelectStage : public SceneBase
{
public:
	// コンストラクタ
	SelectStage();
	// デストラクタ
	~SelectStage();
	// 描画
	void Draw()override;
	// 更新
	SceneBase* Update()override;

private :
	// ステージ１の画像
	const int mStage1Image = LoadGraph("Img/karidata/stage1.png");
	// ステージ１の画像座標X
	int mStage1ImagePosX;
	// ステージ１の画像座標
	int mStageImagePosY;
	// ステージ画像幅
	int mStageImageW;
	// ステージ画像高さ
	int mStageImageH;

};

