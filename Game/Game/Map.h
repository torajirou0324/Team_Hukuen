#pragma once
#include"pch.h"

// �摜�t�@�C���̏���.
static enum BackgroundFileNum
{
	SkyImgFileNum = 0,
	CloudsImgFileNum,
	GrassImgFileNum,
	TileImgFileNum,
	MaxImgFileNum,
};

// �摜�n���h���̓������z��.
// ��L��FileName�ƘA������悤�ɂ���.
static const char* mMapPicName[MaxImgFileNum] =
{
	"img/sky.png",
	"img/clouds.png",
	"img/grass.png"
	"img/tile.png"
};

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
	/// �`��֐�.
	/// </summary>
	void Draw();

	/// <summary>
	/// �ĂԂƃ}�b�v�^�C��X���W��1�����₷
	/// </summary>
	void MapAdd();

	/// <summary>
	/// �ĂԂƃ}�b�v�^�C��X���W��1�����炷
	/// </summary>
	void MapSub();

private:
	int m_cloudImg;			// �_�̉摜�n���h��
	int m_grassImg;			// �����̉摜�n���h��
	int m_skyImg;			// ��̉摜�n���h��
	int m_tileImg;			// �^�C���̉摜�n���h��
	int m_tileData[3][4];	// �^�C���̕`��Ɏg���񎟌��z��
	int m_tileOriginPosX;	// �擪�^�C���񎟌��z��`���X���W
	int m_tileSecondPosX;	// �Q�Ԗڂ̃^�C���񎟌��z��`���X���W
};