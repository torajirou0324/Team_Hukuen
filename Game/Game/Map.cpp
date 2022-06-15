#include "pch.h"

/// <summary>
/// �R���X�g���N�^�A�ϐ����������E�ݒ�.
/// </summary>
Map::Map()
{
	// for���ŕϐ��S�Ă�����������.
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i] = new Background(mPicName[skyImgFileNum]);       // ��̐���.
		mSkyBg[i]->SetPosition(i * SkyImgWidth, 0);     // ���W�̐ݒ�.
	}
	for (int i = 0; i < CloudsImgNum; i++)
	{
		mCloudBg[i] = new Background(mPicName[skyImgFileNum]);   // �_�̐���.
		mCloudBg[i]->SetPosition(i * CloudsImgWidth, 0); // ���W�̐ݒ�.
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
}
