#include "pch.h"

/// <summary>
/// コンストラクタ、変数を初期化・設定.
/// </summary>
Map::Map()
{
	// for文で変数全てを初期化する.
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i] = new Background(mPicName[skyImgFileNum]);       // 空の生成.
		mSkyBg[i]->SetPosition(i * SkyImgWidth, 0);     // 座標の設定.
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i] = new Background(mPicName[skyImgFileNum]);   // 雲の生成.
		mCloudBg[i]->SetPosition(i * CloudsImgWidth, 0); // 座標の設定.
	}
}

/// <summary>
/// デストラクタ、データの削除とメモリの解放をする関数.
/// </summary>
Map::~Map()
{
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i]->~Background();                      // 空の削除.
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i]->~Background();                    // 雲の削除.
	}
}

/// <summary>
/// 更新関数.
/// </summary>
void Map::Update()
{
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i]->Update(SkySpeed);
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i]->Update(CloudsSpeed);
	}
}

/// <summary>
/// 描画関数.
/// </summary>
void Map::Draw()
{
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i]->Draw();
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i]->Draw();
	}
}
