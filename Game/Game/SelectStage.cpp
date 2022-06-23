#include "pch.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
SelectStage::SelectStage()
	: SceneBase()
	, mStage1ImagePosX(200)
	, mStageImagePosY(100)
	, mStageImageW(250)
	, mStageImageH(281)
{
	// �w�i�摜��ǂݍ���
	mBackImage = LoadGraph("Img/karidata/Select_kari.png");
}

/// <summary>
/// �f�X�g���N�^
/// </summary>
SelectStage::~SelectStage()
{

}

/// <summary>
/// �X�V
/// </summary>
/// <returns></returns>
TAG_SCENE SelectStage::Update()
{
	// �}�E�X�̈ʒu���擾
	GetMousePoint(&mMousePosX, &mMousePosY);

	// �����E�{�^���������ꂽ��
	if (InputFrame[MOUSE_INPUT_RIGHT] == 1)
	{
		// �X�e�[�W�摜�������ꂽ��
		if (mStage1ImagePosX <= mMousePosX && mStage1ImagePosX + mStageImageW >= mMousePosX &&
			mStageImagePosY <= mMousePosY && mStageImagePosY + mStageImageH >= mMousePosY)
		{
			// �N���b�N���Đ�
			mClickSE->PlaySE();
			// �Q�[���V�[���֑J��
			return TAG_SCENE::TAG_PLAY;
		}
	}

	// ����ȊO�͂��̃V�[����Ԃ�
	return TAG_SCENE::TAG_NONE;
}


/// <summary>
/// �`��
/// </summary>
void SelectStage::Draw()
{
	// �w�i�`��
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	// �X�e�[�W�P�`��
	DrawGraph(mStage1ImagePosX, mStageImagePosY, mStage1Image, true);
	
}
