#pragma once

// 標準ヘッダファイル
#include <DxLib.h>

// マクロの定義
// ウィンドウ
const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;

/*
* 背景.
*/

// 空.
const float SkySpeed = 0.5f;       // 空の移動スピード.
const int SkyImgNum = 8;           // 空の画像の数.
const int SkyImgWidth = 112;       // 空の画像の横幅(ピクセル単位).

// 雲.
const float CloudsSpeed = 1.0f;    // 雲の移動スピード.
const int CloudsImgNum = 4;        // 雲の画像の数.
const int CloudsImgWidth = 544;    // 雲の画像の横幅(ピクセル単位).

// 草原.
const float GrassSpeed = 1.0f;     // 草原の移動スピード.
const int GrassImgNum = 3;         // 草原の画像の数.
const int GrassImgWidth = 800;     // 草原の画像の横幅(ピクセル単位).

/*
* 
*/

// 作成ヘッダファイル
#include "BackGround.h"
#include "Map.h"
#include "Player.h"