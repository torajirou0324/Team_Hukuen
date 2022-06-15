#include"pch.h"

/// <summary>
/// �R���X�g���N�^�A�ϐ����������E�ݒ肷��.
/// </summary>
/// <param name="imgName">char*�^�̉摜�̃t�@�C���p�X.</param>
Background::Background(const char* imgName)
{
	// �摜�ǂݍ���.
	mImgHandle = LoadGraph(imgName);

	// ���W�ۑ��ϐ��̏�����.
	mPos.x = 0.0f;
	mPos.y = 0.0f;
	mPos.z = 0.0f;

	// �摜�T�C�Y�̎擾.
	GetGraphSize(mImgHandle, &mWidth, &mHeight);
}

/// <summary>
/// �f�X�g���N�^.
/// �������̉���A�f�[�^�̍폜�Ȃ�.
/// </summary>
Background::~Background()
{
	DeleteGraph(mImgHandle);
}

/// <summary>
/// �X�V�֐�.
/// </summary>
void Background::Update(float speed)
{
	// �w�i�ړ�����.
	mPos.x -= speed;

	// ���[�v�����邽�߂Ɉړ�����������.
	if (mPos.x <= -mWidth)
	{
		mPos.x = WINDOW_WIDTH + (float)mWidth;
	}
}

/// <summary>
/// �`��֐�.
/// </summary>
void Background::Draw()
{
	// �`�揈��.
	DrawGraph(mPos.x, mPos.y, mImgHandle, true);

	//DrawFormatString(0,0,GetColor(255,255,255),"%d,%d",mWidth,mHeight);
}
