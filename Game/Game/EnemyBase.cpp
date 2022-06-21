#include "EnemyBase.h"

EnemyBase::EnemyBase(const char* sourceImageHandle)
	: imageHandle(-1)
{
	imageHandle = LoadGraph(sourceImageHandle);//�摜�̃v�����[�h
	if (imageHandle < 0)
	{
		printfDx("�f�[�^�ǂݍ��݂Ɏ��s sourceId:%d", sourceImageHandle);
	}
}

EnemyBase::~EnemyBase()
{
	DeleteGraph(imageHandle);//�A�����[�h
}

void EnemyBase::Draw()
{
	DrawRotaGraphF(mPos.x, mPos.y, 0, 0, imageHandle, false);//�`��i��]����j
	//DrawGraphF(mPos.x, mPos.y, imageHandle, false);//�`��i��]�Ȃ��j
}
