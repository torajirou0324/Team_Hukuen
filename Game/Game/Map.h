#pragma once

#include"pch.h"

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

	// �摜�t�@�C���̏���.
	enum FileName
	{
		skyImgFileNum = 0,
		cloudsImgFileNum,

		MaxImgFileNum,
	};

private:
	Background* mSkyBg[SkyImgNum];       // ��w�i�N���X�̕ۑ��z��ϐ�.
	Background* mCloudBg[CloudsImgNum];   // �_�w�i�N���X�̕ۑ��z��ϐ�.

	// �摜�n���h���̓������z��.
	// ��L��FileName�ƘA������悤�ɂ���.
	const char* mPicName[MaxImgFileNum] =
	{
		"img/sky.png",
		"img/clouds.png"
	};
};