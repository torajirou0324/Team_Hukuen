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
	LoadFontDataFromMemToHandle("font_1_kokumr_1.00_rls.ttf", 1);

	// �t�H���g�T�C�Y�ύX
	SetFontSize(mFontSize);

	// �V�[���}�l�[�W���[��ǂݍ���
	SceneManager* mSceneMG = new SceneManager;
	// �V�[���}�l�[�W���[���폜
	delete mSceneMG;

	/// <summary>
	/// Dxlib�̎g�p�I������.
	/// </summary>
	DxLib_End();
	
	return 0;
}