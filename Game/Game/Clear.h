#pragma once
#include "SceneBase.h"

class Clear :  public SceneBase
{
public:
	// �R���X�g���N�^
	Clear();
	// �f�X�g���N�^
	~Clear();
	// �`��
	void Draw()override;
	// �X�V
	TAG_SCENE Update()override;

private:
	// �^�C�g���֖߂镶�����WX
	int mReturnStringPosX;
	// �^�C�g���֖߂镶�����WY
	int mReturnStringPosY;
};

