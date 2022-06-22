#include "pch.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Result::Result()
	:SceneBase()
	, mReturnStringPosX(190)
	, mReturnStringPosY(150)
{
	// �w�i�摜��ǂݍ���
	mBackImage = LoadGraph("Img/karidata/result_kari.png");
}

/// <summary>
/// �f�X�g���N�^
/// </summary>
Result::~Result()
{

}

/// <summary>
/// �X�V
/// </summary>
/// <returns></returns>
TAG_SCENE Result::Update()
{
	// �}�E�X�̈ʒu���擾
	GetMousePoint(&mMousePosX, &mMousePosY);
	
	// �����E�{�^���������ꂽ��
	if (InputFrame[MOUSE_INPUT_RIGHT] == 1)
	{
		// �͂��{�^���������ꂽ��
		if (mYesButtonImagePosX <= mMousePosX && mYesButtonImagePosX + mButtonImageW >= mMousePosX &&
			mButtonImagePosY <= mMousePosY && mButtonImagePosY + mButtonImageH >= mMousePosY)
		{
			// �^�C�g���V�[���֑J��
			return TAG_SCENE::TAG_TITLE;
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
	return TAG_SCENE::TAG_NONE;
}

/// <summary>
/// �`��
/// </summary>
void Result::Draw()
{
	// �w�i�`��
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	// �u�^�C�g���ɖ߂�H�v�̕`��
	DrawString(mReturnStringPosX, mReturnStringPosY, "�^�C�g���ɖ߂�H", true);
	// �͂��{�^���`��
	DrawGraph(mYesButtonImagePosX, mButtonImagePosY, mYesButtonImage, true);
	// �������{�^���`��
	DrawGraph(mNoButtonImagePosX, mButtonImagePosY, mNoButtonImage, true);
}