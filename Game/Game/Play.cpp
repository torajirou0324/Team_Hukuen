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
	// 背景の削除.
	delete map;
}

/// <summary>
/// 更新
/// </summary>
TAG_SCENE Play::Update()
{

	// 右ボタンが押されたらリザルト画面に遷移
	if (InputFrame[MOUSE_INPUT_RIGHT] == 1)
	{
		return TAG_SCENE::TAG_RESULT;
	}
	UIManager::Update();
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
	// 背景の描画.
	map->Draw();
	UIManager::Draw();
}