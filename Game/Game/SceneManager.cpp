#include "pch.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
SceneManager::SceneManager()
{
	// �V�[���𐶐�
	CreateScene(TAG_SCENE::TAG_TITLE);
	// �Q�[�����[�v�ɓ���
	GameRoop();
}

/// <summary>
/// �f�X�g���N�^
/// </summary>
SceneManager::~SceneManager()
{

}

/// <summary>
/// �V�[����ύX����
/// </summary>
/// <param name="_isScene">���݂̃V�[��</param>

/// <summary>
/// �Q�[�����[�v
/// </summary>
void SceneManager::GameRoop()
{
	UIManager::CreateInstance();
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		/// <summary>
		/// �`�揈��.
		/// </summary>
		ClearDrawScreen();
		// �L�[���͂��v�Z
		UpdateKey();
		// ���݂̃V�[�����X�V
		TAG_SCENE tag = mNowScene->Update();
		// ���݂̃V�[����`��
		mNowScene->Draw();

		// ����ʂ̓��e��\��ʂɔ��f
		ScreenFlip();

		// �^�O��NONE�ł���΁A���݂̃V�[����Ԃ�
		if (tag == TAG_SCENE::TAG_NONE)
		{
			continue;
		}
		
		// �V�[�����폜
		ClearScene();
		// �V�[���𐶐�
		CreateScene(tag);
	}
	UIManager::DeleteInstance();

}

/// <summary>
/// �V�[���𐶐�
/// </summary>
/// <param name="_tag"> ���̃V�[���𔻒肷��^�O </param>
void SceneManager::CreateScene(TAG_SCENE _tag)
{
	// �^�O�ɂ���ăV�[����Ԃ�
	switch (_tag)
	{
		// �^�C�g��
	case TAG_SCENE::TAG_TITLE:
		mNowScene = new Title;
		break;
		// �X�e�[�W�I��
	case TAG_SCENE::TAG_SELECT:
		mNowScene = new SelectStage;
		break;
		// �v���C
	case TAG_SCENE::TAG_PLAY:
		mNowScene = new Play;
		break;
		// ���U���g
	case TAG_SCENE::TAG_RESULT:
		mNowScene = new Result;
		break;
	}
}

/// <summary>
/// �V�[�����폜
/// </summary>
void SceneManager::ClearScene()
{
	// ���݂̃V�[����nullptr�������Ă�����
	if (mNowScene == nullptr)
	{
		// �������Ȃ�
	}
	// ����ȊO�̏ꍇ
	else
	{
		// ���݂̃V�[�����폜
		delete mNowScene;
		// ���݂̃V�[����nullptr����
		mNowScene = nullptr;
	}
}
