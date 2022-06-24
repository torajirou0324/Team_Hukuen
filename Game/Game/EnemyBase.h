#pragma once
#include "pch.h"

class EnemyBase
{
public:
	EnemyBase();	//�R���X�^�g���N�^
	virtual ~EnemyBase();			//�f�X�g���N�^

	virtual void Load(const char* sourceImageHandle);
	virtual void Update() = 0;		//�X�V
	virtual void Draw();			//�`��

	//�C���[�W�n���h���̎擾
	int GetImageHandle() { return mImageHandle; }


protected:
	int mImageHandle;	//�C���[�W�n���h��
	VECTOR mPos ;//���W
	int mW;//�摜�T�C�YX
	int mH;//�摜�T�C�YY
	float mSpeed;
	bool mAliveFlag;
};