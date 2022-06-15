#include"pch.h"

/// <summary>
/// コンストラクタ、変数を初期化・設定する.
/// </summary>
/// <param name="imgName">char*型の画像のファイルパス.</param>
Background::Background(const char* imgName)
{
	// 画像読み込み.
	mImgHandle = LoadGraph(imgName);

	// 座標保存変数の初期化.
	mPos.x = 0.0f;
	mPos.y = 0.0f;
	mPos.z = 0.0f;

	// 画像サイズの取得.
	GetGraphSize(mImgHandle, &mWidth, &mHeight);
}

/// <summary>
/// デストラクタ.
/// メモリの解放、データの削除など.
/// </summary>
Background::~Background()
{
	DeleteGraph(mImgHandle);
}

/// <summary>
/// 更新関数.
/// </summary>
void Background::Update(float speed)
{
	// 背景移動処理.
	mPos.x -= speed;

	// ループさせるために移動処理を書く.
	if (mPos.x <= -mWidth)
	{
		mPos.x = WINDOW_WIDTH + (float)mWidth;
	}
}

/// <summary>
/// 描画関数.
/// </summary>
void Background::Draw()
{
	// 描画処理.
	DrawGraph(mPos.x, mPos.y, mImgHandle, true);

	//DrawFormatString(0,0,GetColor(255,255,255),"%d,%d",mWidth,mHeight);
}
