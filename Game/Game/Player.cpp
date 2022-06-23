#include "pch.h"
//�R���X�g���N�^
Player::Player()
{
	mImgHandle = -1;

	mSpeed = 5.0f;
	mPlayerX = 0;
	mPlayerY = 0;
	mPushBotton = FALSE;
	mCollisionFlag = FALSE;

	Load();
}

//�f�X�g���N�^
Player::~Player()
{

}

//�v���C���[�摜�v�����[�h
void Player::Load()
{
	mImgHandle = LoadGraph("img/player.png");
	//GetGraphSize(mImgHandle, &mWidth, &mHeight);
}

//�v���C���[�ړ�����
void Player::Update()
{
	if (mPlayerMoveUpFlag)
	{
		mPlayerY--;
	}
	else if (mPlayerMoveDownFlag)
	{
		mPlayerY++;
	}
	else if (mPlayerMoveRightFlag)
	{
		mPlayerX++;
	}
}

//�A�C�e���g�p�m�F����
void Player::UsingItem()
{

}

//�G�l�~�[�Ƃ̓����蔻��
void Player::CollisionEnemy(float enemyPosX, float enemyPosY, int enemyWide, int enemyHeight)
{
	if (((mPlayerX > enemyPosX && mPlayerX < enemyPosX + enemyWide) ||
		(enemyPosX > mPlayerX && enemyPosX < mPlayerX + PLAYER_WIDTH)) &&
		((enemyPosY > enemyPosY && mPlayerY < enemyPosY + enemyHeight) ||
			(enemyPosY > mPlayerY && enemyPosY < mPlayerY + PLAYER_HEIGHT)))
	{
		mCollisionFlag = TRUE;
	}
}

//�v���C���[��`�悷��
void Player::Draw()
{
	DrawGraph(mPlayerX, mPlayerY, mImgHandle, TRUE);
}

