#include "pch.h"

/// <summary>
/// コンストラクタ
/// </summary>
Clear::Clear()
	: SceneBase()
	, mReturnStringPosX(160)
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
SceneBase* Clear::Update()
{
	// マウスの位置を取得
	GetMousePoint(&mMousePosX, &mMousePosY);
	// はいボタンが右ボタンで押されたら
	if (mYesButtonImagePosX <= mMousePosX && mYesButtonImagePosX + mButtonImageW >= mMousePosX &&
		mButtonImagePosY <= mMousePosY && mMousePosY + mButtonImageH >= mMousePosY &&
		(GetMouseInput() & MOUSE_INPUT_RIGHT) != 0)
	{
		// タイトルシーンへ遷移
		return new Title();
	}
	// いいえボタンが右ボタンで押されたら
	if (mNoButtonImagePosX <= mMousePosX && mNoButtonImagePosX + mButtonImageW >= mMousePosX &&
		mButtonImagePosY <= mMousePosY && mMousePosY + mButtonImageH >= mMousePosY &&
		(GetMouseInput() & MOUSE_INPUT_RIGHT) != 0)
	{
		// DXライブラリを終了する
		DxLib_End();
	}
	// それ以外の場合はこのシーンを返す
	return this;
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