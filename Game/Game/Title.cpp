#include "pch.h"

/// <summary>
/// コンストラクタ
/// </summary>
Title::Title()
	: SceneBase()
	, mStartStringPosX(150)
	, mStartStringPosY(380)
{
	// 背景画像を読み込む
	mBackImage = LoadGraph("Img/karidata/title_kari.png");
}

/// <summary>
/// デストラクタ
/// </summary>
Title::~Title()
{

}

/// <summary>
/// 更新
/// </summary>
TAG_SCENE Title::Update()
{
	// 右ボタンが押されたらプレイ画面に遷移
	if (/*Key[MOUSE_INPUT_RIGHT] == 1*/(GetMouseInput() & MOUSE_INPUT_RIGHT) != 0)
	{
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
	// 黒色で「左クリックでスタート」と描画
	DrawString(mStartStringPosX, mStartStringPosY, "右クリックでSTART",GetColor(0,0,0));

}