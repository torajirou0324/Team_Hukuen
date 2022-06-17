#pragma once
#include "SceneBase.h"

// �O���錾
class BaseScene;


class SceneManager
{
private:
	// ���݂̃V�[��
	BaseScene* mIsScene;

	//int mIsScene;

public:
	// �R���X�g���N�^
	SceneManager();
	// �f�X�g���N�^
	~SceneManager();

	// �V�[���̎��
	enum Scene
	{
		// �^�C�g��
		title,
		// �Q�[���v���C
		play,
		// �Q�[���N���A
		gameClear,
		// �Q�[���I�[�o�[
		gameOver,
		// �Q�[���I��
		gameEnd
	};

	// �X�V
	static void Update();
	// �`��
	static void Draw();


	// �V�[����ς���
	void ChangeScene(Scene _isScene);

};

