#include "pch.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Clear::Clear()
	: SceneBase()
	, mReturnStringPosX(190)
	, mReturnStringPosY(150)
{
	// �w�i�摜��ǂݍ���
	mBackImage = LoadGraph("Img/karidata/Clear_kari.png");
}

/// <summary>
/// �f�X�g���N�^
/// </summary>
Clear::~Clear()
{

}

/// <summary>
/// �X�V
/// </summary>
SceneBase* Clear::Update()
{
	// �}�E�X�̈ʒu���擾
	GetMousePoint(&mMousePosX, &mMousePosY);

	// �����E�{�^���������ꂽ��
	if ((GetMouseInput() & MOUSE_INPUT_RIGHT) != 0)
	{
		// �͂��{�^���������ꂽ��
		if (mYesButtonImagePosX <= mMousePosX && mYesButtonImagePosX + mButtonImageW >= mMousePosX &&
			mButtonImagePosY <= mMousePosY && mButtonImagePosY + mButtonImageH >= mMousePosY)
		{
			// �^�C�g���V�[���֑J��
			return new Title();
		}
		// �������{�^���������ꂽ��
		if (mNoButtonImagePosX <= mMousePosX && mNoButtonImagePosX + mButtonImageW >= mMousePosX &&
			mButtonImagePosY <= mMousePosY && mButtonImagePosY + mButtonImageH >= mMousePosY)
		{
			// DX���C�u�������I������
			DxLib_End();
		}
	}

	// ����ȊO�̏ꍇ�͂��̃V�[����Ԃ�
	return this;
}

/// <summary>
/// �`��
/// </summary>
void Clear::Draw()
{
	// �w�i�`��
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	// ���F�Łu���N���b�N�ŃX�^�[�g�v�ƕ`��
	DrawString(mReturnStringPosX, mReturnStringPosY, "�^�C�g���֖߂�H", GetColor(255, 255, 255));
	// �{�^��(�͂�)�`��
	DrawGraph(mYesButtonImagePosX, mButtonImagePosY, mYesButtonImage, true);
	// �{�^��(������)�`��
	DrawGraph(mNoButtonImagePosX, mButtonImagePosY, mNoButtonImage, true);
}