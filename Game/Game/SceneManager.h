#pragma once
#include "SceneBase.h"

class SceneManager
{
public:
	// コンストラクタ
	SceneManager();
	// デストラクタ
	~SceneManager();

	// ゲームループ
	void GameRoop();
	// シーン生成
	void CreateScene(TAG_SCENE _tag);
	// シーンを削除
	void ClearScene();

	// マウス入力
	void MouseInput();

private:

	// 現在のシーン
	SceneBase* mNowScene;
};
