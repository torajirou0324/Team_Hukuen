#include "pch.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Title::Title()
	: SceneBase()
	, mStartStringPosX(150)
	, mStartStringPosY(380)
{
	// �w�i�摜��ǂݍ���
	mBackImage = LoadGraph("Img/karidata/title_kari.png");
}

/// <summary>
/// �f�X�g���N�^
/// </summary>
Title::~Title()
{

}

/// <summary>
/// �X�V
/// </summary>
TAG_SCENE Title::Update()
{
	// �E�{�^���������ꂽ��v���C��ʂɑJ��
	if (/*Key[MOUSE_INPUT_RIGHT] == 1*/(GetMouseInput() & MOUSE_INPUT_RIGHT) != 0)
	{
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
	// ���F�Łu���N���b�N�ŃX�^�[�g�v�ƕ`��
	DrawString(mStartStringPosX, mStartStringPosY, "�E�N���b�N��START",GetColor(0,0,0));

}