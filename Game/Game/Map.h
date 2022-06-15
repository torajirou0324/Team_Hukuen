#pragma once
#include"pch.h"

class Background;

/// <summary>
/// �}�b�v�N���X.
/// Background���܂�.
/// </summary>
class Map
{
public:
	/// <summary>
	/// �R���X�g���N�^�A�ϐ��������֐�.
	/// </summary>
	Map();

	/// </summary>
	/// �f�X�g���N�^�A�f�[�^�̍폜�ƃ������̉��������֐�.
	/// </summary>
	~Map();

	/// <summary>
	/// �X�V�֐�.
	/// </summary>
	void Update();

	/// <summary>
	/// �`��֐�.
	/// </summary>
	void Draw();

private:
	Background* mSkyBg[SkyImgNum];       // ��w�i�N���X�̕ۑ��z��ϐ�.
	Background* mCloudBg[CloudImgNum];   // �_�w�i�N���X�̕ۑ��z��ϐ�.
	
	char* mSkyHandle;                    // ��̉摜�n���h��.
	char* mCloudHandle;                  // �_�̉摜�n���h��.
};