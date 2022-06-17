#include"pch.h"

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
	
	// �t�H���g�ύX
	//ChangeFont("nicomoji-plus_1.11");
	// �t�H���g�T�C�Y�ύX
	SetFontSize(mFontSize);
	
	// ���݂̃V�[�����i�[����ϐ��@�Ƀ^�C�g���V�[������
	SceneBase* nowScene = new Title();
	// �ꎞ�I�ɃV�[����ۑ�����ϐ�
	SceneBase* tmpScene;

	/// <summary>
	/// �Q�[�����[�v
	/// </summary>
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		// �V�[���̍X�V
		tmpScene = nowScene->Update();

		// ���݂̃V�[���ƕێ����Ă���V�[�����قȂ��Ă�����
		if (nowScene != tmpScene)
		{
			// ���݂̃V�[�������
			delete nowScene;
			// �ێ����Ă���V�[�������݂̃V�[���ɑ��
			nowScene = tmpScene;
		}

		/// <summary>
		/// �`�揈��.
		/// </summary>

		ClearDrawScreen();

		// ���݂̃V�[����`��
		nowScene->Draw();

		// ����ʂ̓��e��\��ʂɔ��f
		ScreenFlip();
	}

	// �V�[���̍폜
	delete nowScene;

	/// <summary>
	/// Dxlib�̎g�p�I������.
	/// </summary>
	DxLib_End();
	
	return 0;
}