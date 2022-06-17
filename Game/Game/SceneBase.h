#pragma once
#include "DxLib.h"

class SceneBase
{
public:
	// �R���X�g���N�^
	SceneBase();
	// �f�X�g���N�^
	virtual ~SceneBase();

	// �X�V
	virtual SceneBase* Update() = 0;
	// �`��i��j
	virtual void Draw() = 0;

	// ���݂̃V�[��
	int mIsScene;
	
protected:
	// �摜
	// �w�i�摜
	int mBackImage;
	// �{�^���摜(�͂�)
	const int mYesButtonImage = LoadGraph("Img/karidata/button/hai.png");
	// �{�^���摜(������)
	const int mNoButtonImage = LoadGraph("Img/karidata/button/iie.png");

	// ���W
	// �w�i�`����WX
	const int mBackImagePosX = 0;
	// �w�i�`����WY
	const int mBackImagePosY = 0;
	// �{�^��(�͂�)���WX
	const int mYesButtonImagePosX = 130;
	// �{�^��(������)���WX
	const int mNoButtonImagePosX = 410;
	// �{�^�����WY
	const int mButtonImagePosY = 350;
	// �{�^���摜�̕�
	const int mButtonImageW = 100;
	// �{�^���摜�̍���
	const int mButtonImageH = 80;

	// �}�E�X���WX
	int mMousePosX;
	// �}�E�X���WY
	int mMousePosY;

};