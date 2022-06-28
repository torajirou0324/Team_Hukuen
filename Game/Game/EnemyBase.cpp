#include "EnemyBase.h"
#include "pch.h"


EnemyBase::EnemyBase()
	 
{
	mImageHandle = -1;				// �摜�n���h���̏�����.
	mPos = VGet(0.0f, 0.0f, 0.0f);		//�|�W�V�����̏�����
	mW = 0;							// �摜�̏c���̏�����.
	mH = 0;							// �摜�̉����̏�����.
	mSpeed = 0;						//�X�s�[�h�̏�����
	mAliveFlag = false;				//AliveFlag�̏�����
}

EnemyBase::~EnemyBase()
{
	DeleteGraph(mImageHandle);//�A�����[�h
}

void EnemyBase::Load(const char* sourceImageHandle)
{
	mImageHandle = LoadGraph(sourceImageHandle);//�摜�̃v�����[�h
	if (mImageHandle < 0)
	{
		printfDx("�f�[�^�ǂݍ��݂Ɏ��s sourceId:%d", sourceImageHandle);
		return;
	}
	GetGraphSize(mImageHandle, &mW, &mH);//�摜�T�C�Y�擾
}

void EnemyBase::Draw()
{
}
