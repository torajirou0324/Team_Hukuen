#pragma once
#include"pch.h"

/// <summary>
/// 背景クラス.
/// </summary>
class Background
{
public:
	/// <summary>
	/// コンストラクタ、変数初期化関数.
	/// </summary>
	Background(const char* imgName);

	/// </summary>
	/// デストラクタ、データの削除とメモリの解放をする関数.
	/// </summary>
	~Background();

	/// <summary>
	/// 更新関数.
	/// </summary>
	void Update(float speed);

	/// <summary>
	/// 描画関数.
	/// </summary>
	void Draw();

	/// <summary>
	/// 背景画像の座標を設定する関数.
	/// オーバーロード関数.
	/// </summary>
	/// <param name="pos">VECTOR型のpos.</param>
	void SetPosition(VECTOR pos)
	{
		mPos.x = pos.x;
		mPos.y = pos.y;
	}

	/// <summary>
	/// 背景画像の座標を設定する関数.
	/// オーバーロード関数.
	/// </summary>
	/// <param name="pos">float型のpos.</param>
	void SetPosition(float x, float y)
	{
		mPos.x = x;
		mPos.y = y;
	}

private:
	VECTOR mPos;           // 座標保存変数.
	int mWidth, mHeight;   // 縦幅、横幅の保存変数.
	int mImgHandle;        // 画像ハンドル保存変数.
};