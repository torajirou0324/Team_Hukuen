#pragma once
#include "SceneBase.h"
class Result : public SceneBase
{
public:
	// �R���X�g���N�^
	Result();
	// �f�X�g���N�^
	~Result();

	TAG_SCENE Update();
	void Draw();

private:

	// �^�C�g���֖߂镶�����WX
	int mReturnStringPosX;
	// �^�C�g���֖߂镶�����WY
	int mReturnStringPosY;

};

