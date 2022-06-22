#include "pch.h"

/// <summary>
/// コンストラクタ
/// </summary>
SceneBase::SceneBase()
	: mBackImage(0)
{
	mClickSE = new Sound("Sound/crick.mp3");
}

/// <summary>
/// デストラクタ
/// </summary>
SceneBase::~SceneBase()
{

}

