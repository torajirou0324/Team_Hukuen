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
	Background();

	/// </summary>
	/// デストラクタ、データの削除とメモリの解放をする関数.
	/// </summary>
	~Background();

	/// <summary>
	/// 読み込み関数.
	/// </summary>
	/// <param name="imgName"></param>
	void Load(const char* imgName);

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

	/// <summary>
	/// 縦幅の取得関数.
	/// </summary>
	/// <returns>その画像の縦幅(int型)</returns>
	int GetImgHeight()
	{
		return mHeight;
	}

	/// <summary>
	/// 横幅の取得関数.
	/// </summary>
	/// <returns>その画像の横幅(int型).</returns>
	int GetImgWidth()
	{
		return mWidth;
	}

private:
	VECTOR mPos;           // 座標保存変数.
	int mHeight, mWidth;   // 縦幅、横幅の保存変数.
	int mImgHandle;        // 画像ハンドル保存変数.
};