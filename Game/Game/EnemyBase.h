#pragma once
#include "DxLib.h"

class EnemyBase
{
public:
	EnemyBase(const char* sourceImageHandle);	//�R���X�^�g���N�^
	virtual ~EnemyBase();			//�f�X�g���N�^

	virtual void Update() = 0;		//�X�V
	virtual void Draw();			//�`��

	//�C���[�W�n���h���̎擾
	int GetImageHandle() { return imageHandle; }

	VECTOR inputVec;

protected:
	int imageHandle;	//�C���[�W�n���h��
	VECTOR mPos;
	
};