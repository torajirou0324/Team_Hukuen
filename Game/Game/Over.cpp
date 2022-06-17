#include "pch.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Over::Over()
	: SceneBase()
{
	// �w�i�摜��ǂݍ���
	mBackImage = LoadGraph("Img/karidata/over_kari.png");
}

/// <summary>
/// �f�X�g���N�^
/// </summary>
Over::~Over()
{

}

/// <summary>
/// �X�V
/// </summary>
SceneBase* Over::Update()
{
	// �͂��{�^�������{�^���ŉ����ꂽ��
	if (mYesButtonImagePosX <= mMousePosX && mMousePosX + mButtonImageW >= mMousePosX &&
		mButtonImagePosY <= mMousePosY && mMousePosY + mButtonImageH >= mMousePosY &&
		(GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		// �^�C�g���V�[���֑J��
		return new Play();
	}
	// �������{�^�������{�^���ŉ����ꂽ��
	if (mNoButtonImagePosX <= mMousePosX && mMousePosX + mButtonImageW >= mMousePosX &&
		mButtonImagePosY <= mMousePosY && mMousePosY + mButtonImageH >= mMousePosY &&
		(GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		return new Title();
	}
	// ����ȊO�̏ꍇ�͂��̃V�[����Ԃ�
	return this;
}

/// <summary>
/// �`��
/// </summary>
void Over::Draw()
{
	// �w�i�`��
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	// ���F�Łu���g���C����H�v�ƕ`��
	DrawString(mRetryStringPosX, mRetryStringPosY, "�^�C�g���֖߂�H", GetColor(255, 255, 255));
	// �{�^��(�͂�)�`��
	DrawGraph(mYesButtonImagePosX, mButtonImagePosY, mYesButtonImage, true);
	// �{�^��(������)�`��
	DrawGraph(mNoButtonImagePosX, mButtonImagePosY, mNoButtonImage, true);
}