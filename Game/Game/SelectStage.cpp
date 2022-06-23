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
	// 背景画像を読み込む
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
TAG_SCENE SelectStage::Update()
{
	// マウスの位置を取得
	GetMousePoint(&mMousePosX, &mMousePosY);

	// もし右ボタンが押されたら
	if (InputFrame[MOUSE_INPUT_RIGHT] == 1)
	{
		// ステージ画像が押されたら
		if (mStage1ImagePosX <= mMousePosX && mStage1ImagePosX + mStageImageW >= mMousePosX &&
			mStageImagePosY <= mMousePosY && mStageImagePosY + mStageImageH >= mMousePosY)
		{
			// クリック音再生
			mClickSE->PlaySE();
			// ゲームシーンへ遷移
			return TAG_SCENE::TAG_PLAY;
		}
	}

	// それ以外はこのシーンを返す
	return TAG_SCENE::TAG_NONE;
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
