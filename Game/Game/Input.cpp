#include "pch.h"

#define KEYNUM 256

int InputFrame[KEYNUM];

/// <summary>
/// 「何フレーム押されているか」を計算する
/// </summary>
/// <returns></returns>
int UpdateKey()
{
    // マウス入力状態を得る
    int mMouseInput = GetMouseInput() & MOUSE_INPUT_RIGHT;

    for (int i = 0; i < 256; i++)
    {
        // i番のキーコードに対応するキーが押されていたら
        if (mMouseInput != 0)
        {
            // 加算
            InputFrame[i]++;
        }
        // 押されていなければ
        else
        {
            // 0にする
            InputFrame[i] = 0;
        }
    }
    return 0;
}
