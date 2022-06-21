#include "pch.h"

/// <summary>
/// コンストラクタ
/// </summary>
Play::Play()
	: SceneBase()
{
}

/// <summary>
/// デストラクタ
/// </summary>
Play::~Play()
{
	delete map;                                  // 背景の削除.
}

/// <summary>
/// 更新
/// </summary>
TAG_SCENE Play::Update()
{
	/// <summary>
	/// 更新処理.
	/// </summary>
	map->Update();                           // 背景の更新.

	// 右ボタンが押されたらクリア画面に遷移
	if (/*Key[MOUSE_INPUT_RIGHT] == 1*/(GetMouseInput() & MOUSE_INPUT_RIGHT) != 0)
	{
		return TAG_SCENE::TAG_CLEAR;
	}
	// 右ボタンが押されたらゲームオーバー画面に遷移
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		// return new Over();
	}

	// それ以外の場合はこのシーンを返す
	return TAG_SCENE::TAG_NONE;
}

/// <summary>
/// 描画
/// </summary>
void Play::Draw()
{
	// 背景描画
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	map->Draw();                             // 背景の描画.
}