#include "pch.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Over::Over()
	: SceneBase()
	, mRetryStringPosX(160)
	, mRetryStringPosY(150)
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
	// �}�E�X�̈ʒu���擾
	GetMousePoint(&mMousePosX, &mMousePosY);

	// �����E�{�^���������ꂽ��
	if ((GetMouseInput() & MOUSE_INPUT_RIGHT) != 0)
	{
		// �͂��{�^���������ꂽ��
		if (mYesButtonImagePosX <= mMousePosX && mYesButtonImagePosX + mButtonImageW >= mMousePosX &&
			mButtonImagePosY <= mMousePosY && mMousePosY + mButtonImageH >= mMousePosY)
		{
			// �Q�[���V�[���֑J��
			return new Play();
		}
		// �������{�^���������ꂽ��
		if (mNoButtonImagePosX <= mMousePosX && mNoButtonImagePosX + mButtonImageW >= mMousePosX &&
			mButtonImagePosY <= mMousePosY && mButtonImagePosY + mButtonImageH >= mMousePosY)
		{
			// �^�C�g���V�[���֑J��
			return new Title();
		}
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
	DrawString(mRetryStringPosX, mRetryStringPosY, "���g���C����H", GetColor(255, 255, 255));
	// �{�^��(�͂�)�`��
	DrawGraph(mYesButtonImagePosX, mButtonImagePosY, mYesButtonImage, true);
	// �{�^��(������)�`��
	DrawGraph(mNoButtonImagePosX, mButtonImagePosY, mNoButtonImage, true);
}