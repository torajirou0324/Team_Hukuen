#include "EnemyBase.h"
#include "pch.h"


EnemyBase::EnemyBase()
	: mImageHandle(-1)
{
	
	mPos = { 0, 0, 0 };
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
