#include"pch.h"
#include "SceneManager.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	/// <summary>
	/// Dxlib�̏���������.
	/// </summary>
	
	// �E�B���h�E���[�h����.
	// true�̎��̓E�B���h�E���[�h�Afalse�̎��̓t���X�N���[��
	ChangeWindowMode(true);

	// ��ʃ��[�h�̐ݒ�
	SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, 16, 60);

	// DxLib�̏���������
	if (DxLib_Init() == -1) return -1;

	// �O���t�B�b�N�̕`���𗠉�ʂɃZ�b�g
	SetDrawScreen(DX_SCREEN_BACK);
	

	// �}�E�X�J�[�\����\����Ԃɂ���
	SetMouseDispFlag(true);
	//// �t�H���g�ύX
	//ChangeFont("�j�R���W�{");
	// �t�H���g�T�C�Y�ύX
	SetFontSize(mFontSize);


	SceneManager* mSceneMG = new SceneManager;
	delete mSceneMG;

	/// <summary>
	/// Dxlib�̎g�p�I������.
	/// </summary>
	DxLib_End();
	
	return 0;
}