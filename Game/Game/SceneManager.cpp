#include "pch.h"

/// <summary>
/// コンストラクタ
/// </summary>
SceneManager::SceneManager()
	: mIsScene(NULL)
{

}

/// <summary>
/// デストラクタ
/// </summary>
SceneManager::~SceneManager()
{

}

/// <summary>
/// シーンを変更する
/// </summary>
/// <param name="_isScene">現在のシーン</param>
void SceneManager::ChangeScene(Scene _isScene)
{
	switch(_isScene)
	{
		case title:
			break;
		case play:
			break;
		case gameClear:
			break;
		case gameEnd:
			break;
	}
}


/// <summary>
/// 更新
/// </summary>
void SceneManager::Update()
{
	// 左ボタンが押されたら
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		// シーンが変わる
		//ChangeScene();
	}
}

/// <summary>
/// 描画
/// </summary>
void SceneManager::Draw()
{

}
