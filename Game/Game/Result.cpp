#include "pch.h"

/// <summary>
/// コンストラクタ
/// </summary>
Result::Result()
	:SceneBase()
	, mReturnStringPosX(190)
	, mReturnStringPosY(150)
{
	// 背景画像を読み込む
	mBackImage = LoadGraph("Img/karidata/result_kari.png");
}

/// <summary>
/// デストラクタ
/// </summary>
Result::~Result()
{

}

/// <summary>
/// 更新
/// </summary>
/// <returns></returns>
TAG_SCENE Result::Update()
{
	// マウスの位置を取得
	GetMousePoint(&mMousePosX, &mMousePosY);
	
	// もし右ボタンが押されたら
	if (InputFrame[MOUSE_INPUT_RIGHT] == 1)
	{
		// はいボタンが押されたら
		if (mYesButtonImagePosX <= mMousePosX && mYesButtonImagePosX + mButtonImageW >= mMousePosX &&
			mButtonImagePosY <= mMousePosY && mButtonImagePosY + mButtonImageH >= mMousePosY)
		{
			// タイトルシーンへ遷移
			return TAG_SCENE::TAG_TITLE;
		}
		// いいえボタンが押されたら
		if (mNoButtonImagePosX <= mMousePosX && mNoButtonImagePosX + mButtonImageW >= mMousePosX &&
			mButtonImagePosY <= mMousePosY && mButtonImagePosY + mButtonImageH >= mMousePosY)
		{
			// DXライブラリを終了する
			DxLib_End();
		}
	}

	
	// それ以外の場合はこのシーンを返す
	return TAG_SCENE::TAG_NONE;
}

/// <summary>
/// 描画
/// </summary>
void Result::Draw()
{
	// 背景描画
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	// 「タイトルに戻る？」の描画
	DrawString(mReturnStringPosX, mReturnStringPosY, "タイトルに戻る？", true);
	// はいボタン描画
	DrawGraph(mYesButtonImagePosX, mButtonImagePosY, mYesButtonImage, true);
	// いいえボタン描画
	DrawGraph(mNoButtonImagePosX, mButtonImagePosY, mNoButtonImage, true);
}