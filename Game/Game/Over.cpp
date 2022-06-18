#include "pch.h"

/// <summary>
/// コンストラクタ
/// </summary>
Over::Over()
	: SceneBase()
{
	// 背景画像を読み込む
	mBackImage = LoadGraph("Img/karidata/over_kari.png");
}

/// <summary>
/// デストラクタ
/// </summary>
Over::~Over()
{

}

/// <summary>
/// 更新
/// </summary>
SceneBase* Over::Update()
{
	// はいボタンが左ボタンで押されたら
	if (mYesButtonImagePosX <= mMousePosX && mMousePosX + mButtonImageW >= mMousePosX &&
		mButtonImagePosY <= mMousePosY && mMousePosY + mButtonImageH >= mMousePosY &&
		(GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		// タイトルシーンへ遷移
		return new Play();
	}
	// いいえボタンが左ボタンで押されたら
	if (mNoButtonImagePosX <= mMousePosX && mMousePosX + mButtonImageW >= mMousePosX &&
		mButtonImagePosY <= mMousePosY && mMousePosY + mButtonImageH >= mMousePosY &&
		(GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		return new Title();
	}
	// それ以外の場合はこのシーンを返す
	return this;
}

/// <summary>
/// 描画
/// </summary>
void Over::Draw()
{
	// 背景描画
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	// 白色で「リトライする？」と描画
	DrawString(mRetryStringPosX, mRetryStringPosY, "タイトルへ戻る？", GetColor(255, 255, 255));
	// ボタン(はい)描画
	DrawGraph(mYesButtonImagePosX, mButtonImagePosY, mYesButtonImage, true);
	// ボタン(いいえ)描画
	DrawGraph(mNoButtonImagePosX, mButtonImagePosY, mNoButtonImage, true);
}