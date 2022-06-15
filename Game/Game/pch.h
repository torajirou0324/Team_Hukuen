#pragma once

// 標準ヘッダファイル
#include <DxLib.h>

// 作成ヘッダファイル
#include "BackGround.h"
#include "Map.h"
#include "Player.h"

// マクロの定義
// ウィンドウ
const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;

// 背景
const float SkySpeed = 1.0f;                     // 空の移動スピード.
const int SkyImgNum = 6;                         // 空の画像の数.
const int SkyImgWidth = 112;                     // 空の画像の横幅(ピクセル単位).
const char* SkyImgHandle = "img/sky.png";        // 空の画像ハンドル.
const float CloudSpeed = 1.5f;                   // 雲の移動スピード.
const int CloudImgNum = 2;                       // 雲の画像の数.
const int CloudImgWidth = 544;                   // 雲の画像の横幅(ピクセル単位).
const char* CloudImgHandle = "img/clouds.png";   // 雲の画像ハンドル.