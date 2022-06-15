#include "pch.h"

/// <summary>
/// コンストラクタ、変数を初期化・設定.
/// </summary>
Map::Map()
{
	// for文で変数全てを初期化する.
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i] = new Background();                   // 空の生成.
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i] = new Background();                 // 雲の生成.
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

void Map::Load()
{
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i]->Load(mMapPicName[skyImgFileNum]);
		mSkyBg[i]->SetPosition(i * SkyImgWidth, 0);                // 座標の設定.
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i]->Load(mMapPicName[cloudsImgFileNum]);
		mCloudBg[i]->SetPosition(i * CloudsImgWidth, mSkyBg[0]->GetImgHeight() / 3); // 座標の設定.
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