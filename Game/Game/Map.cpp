#include "pch.h"

/// <summary>
/// �R���X�g���N�^�A�ϐ����������E�ݒ�.
/// </summary>
Map::Map()
	: m_cloudImg(LoadGraph(mMapPicName[CloudsImgFileNum]))
	, m_grassImg(LoadGraph("Img/grass.png"))
	, m_skyImg(LoadGraph(mMapPicName[SkyImgFileNum]))
	, m_tileImg(LoadGraph("Img/tile.png"))
	, m_tileOriginPosX(40)
	, m_tileSecondPosX(530)
{
	for (auto j = 0; j < 3; j++)
	{
		for (auto i = 0; i < 4; i++)
		{
			m_tileData[j][i] = 0;
		}
	}
}

/// <summary>
/// �f�X�g���N�^�A�f�[�^�̍폜�ƃ������̉��������֐�.
/// </summary>
Map::~Map()
{

}

/// <summary>
/// �`��֐�.
/// </summary>
void Map::Draw()
{
	for (auto i = 0; i < 4; i++)
	{
		DrawGraph(i * 160, 0, m_skyImg, TRUE);
	}
	DrawGraph(0, 0, m_cloudImg, TRUE);
	DrawGraph(0, 0, m_grassImg, TRUE);
	for (auto j = 0; j < 3; j++)
	{
		for (auto i = 0; i < 4; i++)
		{
			DrawGraph(m_tileOriginPosX + (i * 120) + (j * 50), 200 + j * 70, m_tileImg, TRUE);
			DrawGraph(m_tileSecondPosX + (i * 120) + (j * 50), 200 + j * 70, m_tileImg, TRUE);
		}
	}
}

void Map::MapAdd()
{
	m_tileOriginPosX++;
	m_tileSecondPosX++;
}

void Map::MapSub()
{
	m_tileOriginPosX--;
	m_tileSecondPosX--;
}
