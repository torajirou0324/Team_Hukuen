#include "pch.h"

/// <summary>
/// コンストラクタ
/// </summary>
SceneManager::SceneManager()
	: mMouseInputFlag(false)
{
	// シーンを生成
	CreateScene(TAG_SCENE::TAG_TITLE);
	// ゲームループに入る
	GameRoop();
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

/// <summary>
/// ゲームループ
/// </summary>
void SceneManager::GameRoop()
{
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		/// <summary>
		/// 描画処理.
		/// </summary>
		ClearDrawScreen();
		// 
		TAG_SCENE tag = mNowScene->Update();
		mNowScene->Draw();
		//UpdateKey();
		// 裏画面の内容を表画面に反映
		ScreenFlip();

		if (tag == TAG_SCENE::TAG_NONE)
		{
			continue;
		}
		
		ClearScene();
		CreateScene(tag);
	}
}

/// <summary>
/// シーンを生成
/// </summary>
/// <param name="_tag"> 次のシーンを判定するタグ </param>
void SceneManager::CreateScene(TAG_SCENE _tag)
{
	// タグによってシーンを返す
	switch (_tag)
	{
		// タイトル
	case TAG_SCENE::TAG_TITLE:
		mNowScene = new Title;
		break;
		// ステージ選択
	case TAG_SCENE::TAG_SELECT:
		mNowScene = new SelectStage;
		break;
		// プレイ
	case TAG_SCENE::TAG_PLAY:
		mNowScene = new Play;
		break;
		// クリア
	case TAG_SCENE::TAG_CLEAR:
		mNowScene = new Clear;
		break;
	case TAG_SCENE::TAG_OVER:
		mNowScene = new Over;
		break;
	}
}

/// <summary>
/// シーンを削除
/// </summary>
void SceneManager::ClearScene()
{
	// 現在のシーンにnullptrが入っていたら
	if (mNowScene == nullptr)
	{
		// 何もしない
	}
	// それ以外の場合
	else
	{
		// 現在のシーンを削除
		delete mNowScene;
		// 現在のシーンにnullptrを代入
		mNowScene = nullptr;
	}
}
