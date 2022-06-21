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
SceneBase* SelectStage::Update()
{
	// �}�E�X�̈ʒu���擾
	GetMousePoint(&mMousePosX, &mMousePosY);

	// �������{�^���������ꂽ��
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		// �͂��{�^���������ꂽ��
		if (mStage1ImagePosX <= mMousePosX && mStage1ImagePosX + mStageImageW >= mMousePosX &&
			mStageImagePosY <= mMousePosY && mStageImagePosY + mStageImageH >= mMousePosY)
		{
			// �Q�[���V�[���֑J��
			return new Play();
		}
	}
	// ����ȊO�͂��̃V�[����Ԃ�
	return this;
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
