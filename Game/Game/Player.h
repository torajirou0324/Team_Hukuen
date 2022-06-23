#pragma once

#define PLAYER_WIDTH 64
#define PLAYER_HEIGHT 64

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
	void Update();
	//�v���C���[�`��
	void Draw();

	//�A�C�e���g�p�m�F����
	void UsingItem();

	//�G�l�~�[�Ƃ̓����蔻��
	void CollisionEnemy(float enmeyPosX, float enemyPosY, int enemyWide, int enemyHeight);

	
	//�Z�b�^�[
	void SetPosX(const int& _posX) { mPlayerX = _posX; }
	void SetCollisionFlag(const bool& _Flag) { mCollisionFlag = _Flag; }
	void SetSpeed(const float& _speed) { mSpeed = _speed; }
	void SetMoveUpFlag(const bool& _UpFlag) { mPlayerMoveUpFlag = _UpFlag; }
	void SetMoveDownFlag(const bool& _DownFlag) { mPlayerMoveDownFlag = _DownFlag; }
	void SetMoveRightFlag(const bool& _RightFlag) { mPlayerMoveRightFlag = _RightFlag; }
	//�Q�b�^�[
	const int& GetPosX() const { return mPlayerX; }
	const int& GetPosY() const { return mPlayerY; }
	const float& GetSpeed() const { return mSpeed; }

private:
	
	//�v���C���[�摜
	int mImgHandle;
	//�v���C���[�摜�̏c���A�����i�s�N�Z���P�ʁj
	int mPlayerX, mPlayerY;
	//�v���C���[�ړ����x
	float mSpeed;

	//�{�^�������Ă��邩�̃t���O
	bool mPushBotton;

	//���ꂼ��̃{�^���̃t���O
	bool mPlayerMoveUpFlag;
	bool mPlayerMoveDownFlag;
	bool mPlayerMoveRightFlag;

	//�G�ƐڐG���Ă��邩�̃t���O
	bool mCollisionFlag;
	

};
