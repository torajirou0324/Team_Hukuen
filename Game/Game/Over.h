#pragma once
#include "SceneBase.h"

class Over : public SceneBase
{
public:
	// �R���X�g���N�^
	Over();
	// �f�X�g���N�^
	~Over();
	// �`��
	void Draw()override;
	// �X�V
	SceneBase* Update()override;

private:
	// �^�C�g���֖߂镶�����WX
	int mRetryStringPosX;
	// �^�C�g���֖߂镶�����WY
	int mRetryStringPosY;
};

