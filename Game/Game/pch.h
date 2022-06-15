#pragma once

// 標準ヘッダファイル
#include <DxLib.h>

// マクロの定義
// ウィンドウ
const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;

/// <summary>
/// 背景.
/// </summary>
// 空.
const float SkySpeed = 1.0f;                     // 空の移動スピード.
const int SkyImgNum = 6;                         // 空の画像の数.
const int SkyImgWidth = 112;                     // 空の画像の横幅(ピクセル単位).

// 雲.
const float CloudsSpeed = 1.5f;                   // 雲の移動スピード.
const int CloudsImgNum = 2;                       // 雲の画像の数.
const int CloudsImgWidth = 544;                   // 雲の画像の横幅(ピクセル単位).

// 作成ヘッダファイル
#include "BackGround.h"
#include "Map.h"
#include "Player.h"