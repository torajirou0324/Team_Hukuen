#include "pch.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
SceneManager::SceneManager()
	: mIsScene(NULL)
{

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
void SceneManager::ChangeScene(Scene _isScene)
{
	switch(_isScene)
	{
		case title:
			break;
		case play:
			break;
		case gameClear:
			break;
		case gameEnd:
			break;
	}
}


/// <summary>
/// �X�V
/// </summary>
void SceneManager::Update()
{
	// ���{�^���������ꂽ��
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0)
	{
		// �V�[�����ς��
		//ChangeScene();
	}
}

/// <summary>
/// �`��
/// </summary>
void SceneManager::Draw()
{

}
