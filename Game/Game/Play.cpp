#include "pch.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Play::Play()
	: SceneBase()
{

}

/// <summary>
/// �f�X�g���N�^
/// </summary>
Play::~Play()
{
	delete map;                                  // �w�i�̍폜.
}

/// <summary>
/// �X�V
/// </summary>
SceneBase* Play::Update()
{
	/// <summary>
	/// �X�V����.
	/// </summary>
	map->Update();                           // �w�i�̍X�V.

	// �E�{�^���������ꂽ��N���A��ʂɑJ��
	if ((GetMouseInput() & MOUSE_INPUT_RIGHT) != 0)
	{
		return new Clear();
	}
	// �E�{�^���������ꂽ��Q�[���I�[�o�[��ʂɑJ��
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		// return new Over();
	}

	// ����ȊO�̏ꍇ�͂��̃V�[����Ԃ�
	return this;
}

/// <summary>
/// �`��
/// </summary>
void Play::Draw()
{
	// �w�i�`��
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	map->Draw();                             // �w�i�̕`��.
}