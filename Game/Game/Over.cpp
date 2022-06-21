#include "pch.h"

/// <summary>
/// コンストラクタ
/// </summary>
Over::Over()
	: SceneBase()
	, mRetryStringPosX(160)
	, mRetryStringPosY(150)
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
	// マウスの位置を取得
	GetMousePoint(&mMousePosX, &mMousePosY);

	// もし右ボタンが押されたら
	if ((GetMouseInput() & MOUSE_INPUT_RIGHT) != 0)
	{
		// はいボタンが押されたら
		if (mYesButtonImagePosX <= mMousePosX && mYesButtonImagePosX + mButtonImageW >= mMousePosX &&
			mButtonImagePosY <= mMousePosY && mMousePosY + mButtonImageH >= mMousePosY)
		{
			// ゲームシーンへ遷移
			return new Play();
		}
		// いいえボタンが押されたら
		if (mNoButtonImagePosX <= mMousePosX && mNoButtonImagePosX + mButtonImageW >= mMousePosX &&
			mButtonImagePosY <= mMousePosY && mButtonImagePosY + mButtonImageH >= mMousePosY)
		{
			// タイトルシーンへ遷移
			return new Title();
		}
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
	DrawString(mRetryStringPosX, mRetryStringPosY, "リトライする？", GetColor(255, 255, 255));
	// ボタン(はい)描画
	DrawGraph(mYesButtonImagePosX, mButtonImagePosY, mYesButtonImage, true);
	// ボタン(いいえ)描画
	DrawGraph(mNoButtonImagePosX, mButtonImagePosY, mNoButtonImage, true);
}