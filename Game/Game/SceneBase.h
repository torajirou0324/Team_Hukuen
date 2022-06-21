#pragma once
#include "DxLib.h"

// シーンのタグ
enum class TAG_SCENE
{
	TAG_TITLE,
	TAG_SELECT,
	TAG_PLAY,
	TAG_CLEAR,
	TAG_OVER,
	TAG_NONE
};

class SceneBase
{
public:
	// コンストラクタ
	SceneBase();
	// デストラクタ
	virtual ~SceneBase();

	// 更新
	virtual TAG_SCENE Update() = 0;
	// 描画（空）
	virtual void Draw() = 0;

	// 現在のシーン
	int mIsScene;
	
protected:
	// 画像
	// 背景画像
	int mBackImage;
	// ボタン画像(はい)
	const int mYesButtonImage = LoadGraph("Img/karidata/button/hai.png");
	// ボタン画像(いいえ)
	const int mNoButtonImage = LoadGraph("Img/karidata/button/iie.png");

	// 座標
	// 背景描画座標X
	const int mBackImagePosX = 0;
	// 背景描画座標Y
	const int mBackImagePosY = 0;
	// ボタン(はい)座標X
	const int mYesButtonImagePosX = 130;
	// ボタン(いいえ)座標X
	const int mNoButtonImagePosX = 410;
	// ボタン座標Y
	const int mButtonImagePosY = 350;
	// ボタン画像の幅
	const int mButtonImageW = 100;
	// ボタン画像の高さ
	const int mButtonImageH = 80;

	// マウス座標X
	int mMousePosX;
	// マウス座標Y
	int mMousePosY;


};