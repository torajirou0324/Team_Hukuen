#pragma once

#include"pch.h"

/// <summary>
/// マップクラス.
/// Backgroundを含む.
/// </summary>
class Map
{
public:
	/// <summary>
	/// コンストラクタ、変数初期化関数.
	/// </summary>
	Map();

	/// </summary>
	/// デストラクタ、データの削除とメモリの解放をする関数.
	/// </summary>
	~Map();

	/// <summary>
	/// 更新関数.
	/// </summary>
	void Update();

	/// <summary>
	/// 描画関数.
	/// </summary>
	void Draw();

	// 画像ファイルの順番.
	enum FileName
	{
		skyImgFileNum = 0,
		cloudsImgFileNum,

		MaxImgFileNum,
	};

private:
	Background* mSkyBg[SkyImgNum];       // 空背景クラスの保存配列変数.
	Background* mCloudBg[CloudsImgNum];   // 雲背景クラスの保存配列変数.

	// 画像ハンドルの入った配列.
	// 上記のFileNameと連動するようにする.
	const char* mPicName[MaxImgFileNum] =
	{
		"img/sky.png",
		"img/clouds.png"
	};
};