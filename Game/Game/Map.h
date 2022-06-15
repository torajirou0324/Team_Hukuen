#pragma once
#include"pch.h"

// 画像ファイルの順番.
static enum BackgroundFileNum
{
	skyImgFileNum = 0,
	cloudsImgFileNum,
	grassImgFileNum,

	MaxImgFileNum,
};

// 画像ハンドルの入った配列.
// 上記のFileNameと連動するようにする.
static const char* mMapPicName[MaxImgFileNum] =
{
	"img/sky.png",
	"img/clouds.png",
	"img/grass.png"
};

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
	/// 読み込み関数.
	/// </summary>
	void Load();

	/// <summary>
	/// 更新関数.
	/// </summary>
	void Update();

	/// <summary>
	/// 描画関数.
	/// </summary>
	void Draw();

private:
	Background* mSkyBg[SkyImgNum];        // 空背景クラスの保存配列変数.
	Background* mCloudBg[CloudsImgNum];   // 雲背景クラスの保存配列変数.
};