#include"pch.h"
#include "SceneManager.h"

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
	

	// マウスカーソルを表示状態にする
	SetMouseDispFlag(true);
	//// フォント変更
	//ChangeFont("ニコモジ＋");
	LoadFontDataFromMemToHandle("font_1_kokumr_1.00_rls.ttf", 1);

	// フォントサイズ変更
	SetFontSize(mFontSize);

	// シーンマネージャーを読み込む
	SceneManager* mSceneMG = new SceneManager;
	// シーンマネージャーを削除
	delete mSceneMG;

	/// <summary>
	/// Dxlibの使用終了処理.
	/// </summary>
	DxLib_End();
	
	return 0;
}