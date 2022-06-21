#include "pch.h"

/// <summary>
/// コンストラクタ
/// </summary>
SelectStage::SelectStage()
	: SceneBase()
	, mStage1ImagePosX(200)
	, mStageImagePosY(100)
	, mStageImageW(250)
	, mStageImageH(281)
{
	mBackImage = LoadGraph("Img/karidata/Select_kari.png");
}

/// <summary>
/// デストラクタ
/// </summary>
SelectStage::~SelectStage()
{

}

/// <summary>
/// 更新
/// </summary>
/// <returns></returns>
SceneBase* SelectStage::Update()
{
	// マウスの位置を取得
	GetMousePoint(&mMousePosX, &mMousePosY);

	// もし左ボタンが押されたら
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		// はいボタンが押されたら
		if (mStage1ImagePosX <= mMousePosX && mStage1ImagePosX + mStageImageW >= mMousePosX &&
			mStageImagePosY <= mMousePosY && mStageImagePosY + mStageImageH >= mMousePosY)
		{
			// ゲームシーンへ遷移
			return new Play();
		}
	}
	// それ以外はこのシーンを返す
	return this;
}


/// <summary>
/// 描画
/// </summary>
void SelectStage::Draw()
{
	// 背景描画
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	// ステージ１描画
	DrawGraph(mStage1ImagePosX, mStageImagePosY, mStage1Image, true);
	
}
