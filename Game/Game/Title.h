#pragma once
#include "SceneBase.h"

class Title : public SceneBase
{
public:
	// �R���X�g���N�^
	Title();
	// �f�X�g���N�^
	~Title();
	// �`��
	void Draw()override;
	// �X�V
	SceneBase* Update()override;

private:
	// �X�^�[�g�������WX
	int mStartStringPosX;
	// �X�^�[�g�������WY
	int mStartStringPosY;

};

