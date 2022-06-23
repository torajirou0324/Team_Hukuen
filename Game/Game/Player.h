#pragma once
#include"pch.h"

class SceneManager;

class Player
{
public:
	//�R���X�g���N�^
	Player();
	//�f�X�g���N�^
	~Player();

	//�v���C���[�����ʒu�ݒ�
	void SetPosition(float posx, float posy);
	//�v���C���[�摜�ǂݍ���
	void Load();
	//�v���C���[�ړ�����
	void Update(float moveMapLeftSpeed);
	//�v���C���[�`��
	void Draw();

	//�A�C�e���g�p�m�F����
	void UsingItem();

	//�G�l�~�[�Ƃ̓����蔻��
	void CollisionEnemy(float enmeyPosX, float enemyPosY, int enemyWide, int enemyHeight);

	
	//�Z�b�^�[
	void SetPosX(const int& _posX) { mWidth = _posX; }
	void SetCollisionFlag(const bool& _Flag) { mCollisionFlag = _Flag; }
	void SetSpeed(const float& _speed) { mSpeed = _speed; }
	//�Q�b�^�[
	const int& GetPosX() const { return mWidth; }
	const int& GetPosY() const { return mHeight; }
	const float& GetSpeed() const { return mSpeed; }

private:
	//�v���C���[�ʒu
	VECTOR mPos;
	//�v���C���[�摜
	int mImgHandle;
	//�v���C���[�摜�̗����A�����i�s�N�Z���P�ʁj
	int mHeight, mWidth;
	//�v���C���[�ړ����x
	float mSpeed;

	//�{�^�������Ă��邩�̃t���O
	bool mPushBotton;

	//�G�ƐڐG���Ă��邩�̃t���O
	bool mCollisionFlag;
	

};
