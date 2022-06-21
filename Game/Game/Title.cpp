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
SceneBase* Title::Update()
{
	// ���{�^���������ꂽ��v���C��ʂɑJ��
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		return new SelectStage();
	}
	// ����ȊO�̏ꍇ�͂��̃V�[����Ԃ�
	return this;
	// �����ꂽ�ꏊ�ɂ���ăX�^�[�g��������Q�[���I���������肷��
}

/// <summary>
/// �`��
/// </summary>
void Title::Draw()
{
	// �w�i�`��
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	// ���F�Łu���N���b�N�ŃX�^�[�g�v�ƕ`��
	DrawString(mStartStringPosX, mStartStringPosY, "���N���b�N��START",GetColor(0,0,0));

}