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

	/*
	* �ϐ��̏�����.
	*/
	Map* map = new Map();          // �w�i�̐���.

	/*
	* �ǂݍ��݊֐�.
	*/
	map->Load();

	/// <summary>
	/// �Q�[�����[�v
	/// </summary>
	while (true)
	{
		/// <summary>
		/// �`�揈��.
		/// </summary>

		ClearDrawScreen();

		map->Draw();                             // �w�i�̕`��.

		ScreenFlip();

		/// <summary>
		/// �X�V����.
		/// </summary>

		map->Update();                           // �w�i�̍X�V.

		// �����G�X�P�[�v�L�[�������ꂽ�Ƃ�.
		if (CheckHitKey(KEY_INPUT_ESCAPE))
		{
			// ���[�v���甲����.
			break;
		}
	}

	delete map;                                  // �w�i�̍폜.

	/// <summary>
	/// Dxlib�̎g�p�I������.
	/// </summary>
	DxLib_End();
	
	return 0;
}