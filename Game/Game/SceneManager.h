#pragma once
#include "SceneBase.h"

// 前方宣言
class BaseScene;


class SceneManager
{
private:
	// 現在のシーン
	BaseScene* mIsScene;

	//int mIsScene;

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

