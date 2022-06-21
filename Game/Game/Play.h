#pragma once
#include "SceneBase.h"
class Play : public SceneBase
{
public:
	// コンストラクタ
	Play();
	// デストラクタ
	~Play();
	// 描画
	void Draw();
	// 更新
	TAG_SCENE Update()override;

	/// <summary>
	/// 変数の初期化.
	/// </summary>
	Map* map = new Map();          // 背景の生成.

};

