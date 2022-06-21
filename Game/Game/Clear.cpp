#include "pch.h"

/// <summary>
/// コンストラクタ
/// </summary>
Clear::Clear()
	: SceneBase()
	, mReturnStringPosX(190)
	, mReturnStringPosY(150)
{
	// 背景画像を読み込む
	mBackImage = LoadGraph("Img/karidata/Clear_kari.png");
}

/// <summary>
/// デストラクタ
/// </summary>
Clear::~Clear()
{

}

/// <summary>
/// 更新
/// </summary>
TAG_SCENE Clear::Update()
{
	// マウスの位置を取得
	GetMousePoint(&mMousePosX, &mMousePosY);

	// もし右ボタンが押されたら
	if (/*Key[MOUSE_INPUT_RIGHT] == 1*/(GetMouseInput() & MOUSE_INPUT_RIGHT) != 0)
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
void Clear::Draw()
{
	// 背景描画
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	// 白色で「左クリックでスタート」と描画
	DrawString(mReturnStringPosX, mReturnStringPosY, "タイトルへ戻る？", GetColor(255, 255, 255));
	// ボタン(はい)描画
	DrawGraph(mYesButtonImagePosX, mButtonImagePosY, mYesButtonImage, true);
	// ボタン(いいえ)描画
	DrawGraph(mNoButtonImagePosX, mButtonImagePosY, mNoButtonImage, true);
}