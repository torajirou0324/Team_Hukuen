#include "pch.h"

/// <summary>
/// �R���X�g���N�^�A�ϐ����������E�ݒ�.
/// </summary>
Map::Map()
{
	// for���ŕϐ��S�Ă�����������.
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i] = new Background();                   // ��̐���.
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i] = new Background();                 // �_�̐���.
	}
	for (int i = 0; i < GrassImgNum; i++)
	{
		mGrassBg[i] = new Background();                 // �����̐���.
	}
}

/// <summary>
/// �f�X�g���N�^�A�f�[�^�̍폜�ƃ������̉��������֐�.
/// </summary>
Map::~Map()
{
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i]->~Background();                      // ��̍폜.
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i]->~Background();                    // �_�̍폜.
	}
	for (int i = 0; i < GrassImgNum; i++)
	{
		mGrassBg[i]->~Background();
	}
}

void Map::Load()
{
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i]->Load(mMapPicName[SkyImgFileNum]);
		mSkyBg[i]->SetPosition(i * SkyImgWidth, 0);                // ���W�̐ݒ�.
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i]->Load(mMapPicName[CloudsImgFileNum]);
		mCloudBg[i]->SetPosition(i * CloudsImgWidth, mSkyBg[0]->GetImgHeight() / 3); // ���W�̐ݒ�.
	}
	for (int i = 0; i < GrassImgNum; i++)
	{
		mGrassBg[i]->Load(mMapPicName[GrassImgFileNum]);
		mGrassBg[i]->SetPosition(i * GrassImgWidth, mCloudBg[0]->GetImgHeight() / 2);
	}
}

/// <summary>
/// �X�V�֐�.
/// </summary>
void Map::Update()
{
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i]->Update(SkySpeed);
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i]->Update(CloudsSpeed);
	}
	for (int i = 0; i < GrassImgNum; i++)
	{
		mGrassBg[i]->Update(GrassSpeed);
	}
}

/// <summary>
/// �`��֐�.
/// </summary>
void Map::Draw()
{
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i]->Draw();
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i]->Draw();
	}
	for (int i = 0; i < GrassImgNum; i++)
	{
		mGrassBg[i]->Draw();
	}
}