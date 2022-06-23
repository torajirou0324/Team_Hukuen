#include "pch.h"

#define PI 3.1415926f
/// <summary>
/// �R���X�g���N�^
/// </summary>
Title::Title()
	: SceneBase()
	, mStartStringPosX(100)
	, mStartStringPosY(380)
	, mCloud1PosX(480)
	, mCloud1PosY(260)
	, mCloud2PosX(50)
	, mCloud2PosY(60)
	, mCount(0)
	, mCloudSpeed(120)
	, mCloudRange(40)
	, mSmoothMove(3)
{
	// �w�i�摜��ǂݍ���
	mBackImage = LoadGraph("Img/karidata/title_kari.png");
	mCloudImage = LoadGraph("Img/karidata/Cloud.png");
	mStarStringtImage = LoadGraph("Img/karidata/moji/title.png");
}

/// <summary>
/// �f�X�g���N�^
/// </summary>
Title::~Title()
{
	// SE�̍폜
	//delete mClickSE;
}

/// <summary>
/// �X�V
/// </summary>
TAG_SCENE Title::Update()
{
	// �J�E���g�����Z����
	mCount++;

	// �E�{�^���������ꂽ��v���C��ʂɑJ��
	if (InputFrame[MOUSE_INPUT_RIGHT] == 1)
	{
		// �N���b�N���Đ�
		mClickSE->PlaySE();
		return TAG_SCENE::TAG_SELECT;
	}
	// ����ȊO�̏ꍇ�͂��̃V�[����Ԃ�
	return TAG_SCENE::TAG_NONE;
}

/// <summary>
/// �`��
/// </summary>
void Title::Draw()
{
	// �w�i�`��
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);

	// �_��`��
	DrawGraph(mCloud1PosX - sin(PI / mSmoothMove / mCloudSpeed * mCount) * mCloudRange, mCloud1PosY, mCloudImage, true);
	DrawGraph(mCloud2PosX - sin(-PI / mSmoothMove / mCloudSpeed * mCount) * mCloudRange, mCloud2PosY, mCloudImage, true);

	// ���F�Łu���N���b�N�ŃX�^�[�g�v�ƕ`��
	DrawGraph(mStartStringPosX, mStartStringPosY, mStarStringtImage, true);

}