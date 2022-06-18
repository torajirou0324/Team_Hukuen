#include"pch.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	/// <summary>
	/// Dxlibの初期化処理.
	/// </summary>
	
	// ウィンドウモード処理.
	// trueの時はウィンドウモード、falseの時はフルスクリーン
	ChangeWindowMode(true);

	// 画面モードの設定
	SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, 16, 60);

	// DxLibの初期化処理
	if (DxLib_Init() == -1) return -1;

	// グラフィックの描画先を裏画面にセット
	SetDrawScreen(DX_SCREEN_BACK);
	
	// フォント変更
	//ChangeFont("nicomoji-plus_1.11");
	// フォントサイズ変更
	SetFontSize(mFontSize);
	
	// 現在のシーンを格納する変数　にタイトルシーンを代入
	SceneBase* nowScene = new Title();
	// 一時的にシーンを保存する変数
	SceneBase* tmpScene;

	/// <summary>
	/// ゲームループ
	/// </summary>
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		// シーンの更新
		tmpScene = nowScene->Update();

		// 現在のシーンと保持しているシーンが異なっていたら
		if (nowScene != tmpScene)
		{
			// 現在のシーンを解放
			delete nowScene;
			// 保持しているシーンを現在のシーンに代入
			nowScene = tmpScene;
		}

		/// <summary>
		/// 描画処理.
		/// </summary>

		ClearDrawScreen();

		// 現在のシーンを描画
		nowScene->Draw();

		// 裏画面の内容を表画面に反映
		ScreenFlip();
	}

	// シーンの削除
	delete nowScene;

	/// <summary>
	/// Dxlibの使用終了処理.
	/// </summary>
	DxLib_End();
	
	return 0;
}