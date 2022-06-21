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
SceneBase* Title::Update()
{
	// 左ボタンが押されたらプレイ画面に遷移
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		return new SelectStage();
	}
	// それ以外の場合はこのシーンを返す
	return this;
	// 押された場所によってスタートだったりゲーム終了だったりする
}

/// <summary>
/// 描画
/// </summary>
void Title::Draw()
{
	// 背景描画
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	// 黒色で「左クリックでスタート」と描画
	DrawString(mStartStringPosX, mStartStringPosY, "左クリックでSTART",GetColor(0,0,0));

}