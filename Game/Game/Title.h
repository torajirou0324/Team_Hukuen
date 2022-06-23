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
	TAG_SCENE Update()override;

private:
	// �X�^�[�g�����摜
	int mStarStringtImage;
	// �X�^�[�g�������WX
	int mStartStringPosX;
	// �X�^�[�g�������WY
	int mStartStringPosY;

	// �_�̉摜
	int mCloudImage;
	// �_�P�̍��WX
	int mCloud1PosX;
	// �_�P�̍��WY
	int mCloud1PosY;
	// �_�Q�̍��WX
	int mCloud2PosX;
	// �_�Q�̍��WY
	int mCloud2PosY;

	// �J�E���g
	int mCount;
	// �_�̃X�s�[�h
	int mCloudSpeed;
	// �_�������͈�
	int mCloudRange;
	// �_���X���[�Y�ɓ�����
	int mSmoothMove;

};

