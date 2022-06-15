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

	/// <summary>
	/// 変数の初期化.
	/// </summary>
	Map* map = new Map();          // 背景の生成.

	/// <summary>
	/// ゲームループ
	/// </summary>
	while (true)
	{
		/// <summary>
		/// 更新処理.
		/// </summary>

		map->Update();                           // 背景の更新.

		/// <summary>
		/// 描画処理.
		/// </summary>

		ClearDrawScreen();

		map->Draw();                             // 背景の描画.

		ScreenFlip();

		// もしエスケープキーを押されたとき.
		if (CheckHitKey(KEY_INPUT_ESCAPE))
		{
			// ループから抜ける.
			break;
		}
	}

	delete map;                                  // 背景の削除.

	/// <summary>
	/// Dxlibの使用終了処理.
	/// </summary>
	DxLib_End();
	
	return 0;
}