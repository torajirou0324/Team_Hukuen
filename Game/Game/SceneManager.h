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


private:
	// マウス入力管理フラグ
	bool mMouseInputFlag;

	// 現在のシーン
	SceneBase* mNowScene;

};

