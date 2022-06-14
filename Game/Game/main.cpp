#include <DxLib.h>

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	// 画面モードの設定
	SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, 16, 60);

	// DxLibの初期化処理
	if (DxLib_Init() == -1) return -1;

	// グラフィックの描画先を裏画面にセット
	SetDrawScreen(DX_SCREEN_BACK);
	
	return 0;
}