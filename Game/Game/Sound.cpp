#include "pch.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
Sound::Sound(const char* _filePath)
	:mOnceSoundFlag(false)
{
	// �T�E���h�̓ǂݍ���
	mSoundHandle = LoadSoundMem(_filePath);
}

/// <summary>
/// �f�X�g���N�^
/// </summary>
Sound::~Sound()
{
	DeleteSoundMem(mSoundHandle);
}

/// <summary>
/// ���y���Đ�������
/// </summary>
void Sound::PlayBGM()
{
	//�Đ�����Ă��Ȃ�������Đ�����
	if (!CheckSoundMem(mSoundHandle))
	{
		PlaySoundMem(mSoundHandle, DX_PLAYTYPE_LOOP, TRUE);
	}
}


/// <summary>
/// �Q�[�����̌��ʉ��Đ�
/// </summary>
void Sound::PlaySE()
{
	//�Đ�����Ă��Ȃ�������Đ�����
	if (!CheckSoundMem(mSoundHandle) )
	{
		PlaySoundMem(mSoundHandle, DX_PLAYTYPE_BACK, TRUE);
	}
}

/// <summary>
/// �Đ����Ă��鉹�y���~
/// </summary>
void Sound::StopMusic()
{
	StopSoundMem(mSoundHandle);
}

/// <summary>
/// ���y���Đ�����Ă��邩�ǂ���
/// </summary>
int Sound::CheckBGM()
{
	if (!CheckSoundMem(mSoundHandle))
	{
		return false;
	}
	else if (CheckSoundMem(mSoundHandle))
	{
		return true;
	}
}
