#include"pch.h"

/// <summary>
/// �R���X�g���N�^�A�ϐ����������E�ݒ肷��.
/// </summary>
Background::Background()
{
	// ���W�ۑ��ϐ��̏�����.
	mPos.x = 0.0f;
	mPos.y = 0.0f;
	mPos.z = 0.0f;

	mImgHandle = -1;       // �摜�n���h���̏�����.

	mHeight = 0;           // �摜�̏c���̏�����.
	mWidth = 0;            // �摜�̉����̏�����.
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
/// �ǂݍ��݊֐�.
/// </summary>
/// <param name="imgName">char*�^�̉摜�̃t�@�C���p�X.</param>
void Background::Load(const char* imgName)
{
	// �摜�ǂݍ���.
	mImgHandle = LoadGraph(imgName);

	// �摜�T�C�Y�̎擾.
	GetGraphSize(mImgHandle, &mWidth, &mHeight);
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
		mPos.x = (float)WINDOW_WIDTH + (float)mWidth - 0.25f;
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