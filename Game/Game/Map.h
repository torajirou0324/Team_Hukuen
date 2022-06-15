#pragma once
#include"pch.h"

class Background;

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

private:
	Background* mSkyBg[SkyImgNum];       // 空背景クラスの保存配列変数.
	Background* mCloudBg[CloudImgNum];   // 雲背景クラスの保存配列変数.
	
	char* mSkyHandle;                    // 空の画像ハンドル.
	char* mCloudHandle;                  // 雲の画像ハンドル.
};