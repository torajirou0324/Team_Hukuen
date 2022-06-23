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
	// �w�i�̍폜.
	delete map;
}

/// <summary>
/// �X�V
/// </summary>
TAG_SCENE Play::Update()
{

	// �E�{�^���������ꂽ�烊�U���g��ʂɑJ��
	if (InputFrame[MOUSE_INPUT_RIGHT] == 1)
	{
		return TAG_SCENE::TAG_RESULT;
	}
	UIManager::Update();
	// ����ȊO�̏ꍇ�͂��̃V�[����Ԃ�
	return TAG_SCENE::TAG_NONE;
}

/// <summary>
/// �`��
/// </summary>
void Play::Draw()
{
	// �w�i�`��
	DrawGraph(mBackImagePosX, mBackImagePosY, mBackImage, true);
	// �w�i�̕`��.
	map->Draw();
	UIManager::Draw();
}