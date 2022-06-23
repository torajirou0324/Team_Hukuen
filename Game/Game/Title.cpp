#include "pch.h"

#define PI 3.1415926f
/// <summary>
/// コンストラクタ
/// </summary>
Title::Title()
	: SceneBase()
	, mStartStringPosX(100)
	, mStartStringPosY(380)
	, mCloud1PosX(480)
	, mCloud1PosY(260)
	, mCloud2PosX(50)
	, mCloud2PosY(60)
	, mCount(0)
	, mCloudSpeed(120)
	, mCloudRange(40)
	, mSmoothMove(3)
{
	// 背景画像を読み込む
	mBackImage = LoadGraph("Img/karidata/title_kari.png");
	mCloudImage = LoadGraph("Img/karidata/Cloud.png");
	mStarStringtImage = LoadGraph("Img/karidata/moji/title.png");
}

/// <summary>
/// デストラクタ
/// </summary>
Title::~Title()
{
	// SEの削除
	//delete mClickSE;
}

/// <summary>
/// 更新
/// </summary>
TAG_SCENE Title::Update()
{
	// カウントを加算する
	mCount++;

	// 右ボタンが押されたらプレイ画面に遷移
	if (InputFrame[MOUSE_INPUT_RIGHT] == 1)
	{
		// クリック音再生
		mClickSE->PlaySE();
		return TAG_SCENE::TAG_SELECT;
	}
	// それ以外の場合はこのシーンを返す
	return TAG_SCENE::TAG_NONE;
}

/// <summary>
/// 描画
/// </summary>
void Title::Draw()
{
	// 背景描画
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);

	// 雲を描画
	DrawGraph(mCloud1PosX - sin(PI / mSmoothMove / mCloudSpeed * mCount) * mCloudRange, mCloud1PosY, mCloudImage, true);
	DrawGraph(mCloud2PosX - sin(-PI / mSmoothMove / mCloudSpeed * mCount) * mCloudRange, mCloud2PosY, mCloudImage, true);

	// 黒色で「左クリックでスタート」と描画
	DrawGraph(mStartStringPosX, mStartStringPosY, mStarStringtImage, true);

}