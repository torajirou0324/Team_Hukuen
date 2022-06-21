#pragma once
#include"pch.h"

// 画像ファイルの順番.
static enum BackgroundFileNum
{
	SkyImgFileNum = 0,
	CloudsImgFileNum,
	GrassImgFileNum,
	TileImgFileNum,
	MaxImgFileNum,
};

// 画像ハンドルの入った配列.
// 上記のFileNameと連動するようにする.
static const char* mMapPicName[MaxImgFileNum] =
{
	"img/sky.png",
	"img/clouds.png",
	"img/grass.png"
	"img/tile.png"
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
	/// 描画関数.
	/// </summary>
	void Draw();

	/// <summary>
	/// 呼ぶとマップタイルX座標を1ずつ増やす
	/// </summary>
	void MapAdd();

	/// <summary>
	/// 呼ぶとマップタイルX座標を1ずつ減らす
	/// </summary>
	void MapSub();

private:
	int m_cloudImg;			// 雲の画像ハンドル
	int m_grassImg;			// 草原の画像ハンドル
	int m_skyImg;			// 空の画像ハンドル
	int m_tileImg;			// タイルの画像ハンドル
	int m_tileData[3][4];	// タイルの描画に使う二次元配列
	int m_tileOriginPosX;	// 先頭タイル二次元配列描画のX座標
	int m_tileSecondPosX;	// ２番目のタイル二次元配列描画のX座標
};