#pragma once
#include"pch.h"

// �摜�t�@�C���̏���.
static enum BackgroundFileNum
{
	SkyImgFileNum = 0,
	CloudsImgFileNum,
	GrassImgFileNum,

	MaxImgFileNum,
};

// �摜�n���h���̓������z��.
// ��L��FileName�ƘA������悤�ɂ���.
static const char* mMapPicName[MaxImgFileNum] =
{
	"img/sky.png",
	"img/clouds.png",
	"img/grass.png"
};

//static int map[][]=
//{
//	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
//	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
//	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
//}

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
	/// �ǂݍ��݊֐�.
	/// </summary>
	void Load();

	/// <summary>
	/// �X�V�֐�.
	/// </summary>
	void Update();

	/// <summary>
	/// �`��֐�.
	/// </summary>
	void Draw();

private:
	Background* mSkyBg[SkyImgNum];        // ��w�i�N���X�̕ۑ��z��ϐ�.
	Background* mCloudBg[CloudsImgNum];   // �_�w�i�N���X�̕ۑ��z��ϐ�.
	Background* mGrassBg[GrassImgNum];    // �����w�i�N���X�̕ۑ��z��ϐ�.
};