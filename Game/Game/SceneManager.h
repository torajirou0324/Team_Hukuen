#pragma once
#include "SceneBase.h"

class SceneManager
{
public:
	// コンストラクタ
	SceneManager();
	// デストラクタ
	~SceneManager();

	// シーンの種類
	enum Scene
	{
		// タイトル
		title,
		// ゲームプレイ
		play,
		// ゲームクリア
		gameClear,
		// ゲームオーバー
		gameOver,
		// ゲーム終了
		gameEnd
	};

	// 更新
	static void Update();
	// 描画
	static void Draw();


	// シーンを変える
	void ChangeScene(Scene _isScene);

};

