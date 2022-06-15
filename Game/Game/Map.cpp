#include "pch.h"

/// <summary>
/// �R���X�g���N�^�A�ϐ����������E�ݒ�.
/// </summary>
Map::Map()
{
	// for���ŕϐ��S�Ă�����������.
	for (int i = 0; i < SkyImgNum; i++)
	{
		mSkyBg[i] = new Background(SkyImgHandle);       // ��̐���.
		mSkyBg[i]->SetPosition(0, i * SkyImgWidth);     // ���W�̐ݒ�.
	}
	for (int i = 0; i < CloudImgNum; i++)
	{
		mCloudBg[i] = new Background(CloudImgHandle);   // �_�̐���.
		mCloudBg[i]->SetPosition(0, i * CloudImgWidth); // ���W�̐ݒ�.
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
	for (int i = 0; i < CloudImgNum; i++)
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
	for (int i = 0; i < CloudImgNum; i++)
	{
		mCloudBg[i]->Update(CloudSpeed);
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
	for (int i = 0; i < CloudImgNum; i++)
	{
		mCloudBg[i]->Draw();
	}
}
