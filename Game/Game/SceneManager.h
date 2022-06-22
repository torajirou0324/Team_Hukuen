#pragma once
#include "SceneBase.h"

class SceneManager
{
public:
	// �R���X�g���N�^
	SceneManager();
	// �f�X�g���N�^
	~SceneManager();

	// �Q�[�����[�v
	void GameRoop();
	// �V�[������
	void CreateScene(TAG_SCENE _tag);
	// �V�[�����폜
	void ClearScene();

	// �}�E�X����
	void MouseInput();

private:

	// ���݂̃V�[��
	SceneBase* mNowScene;
};
