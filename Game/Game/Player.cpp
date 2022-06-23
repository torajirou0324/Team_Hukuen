#include "pch.h"
//�R���X�g���N�^
Player::Player()
{
	mPos.x = 0.0f;
	mPos.y = 0.0f;
	mPos.z = 0.0f;

	mImgHandle = -1;

	mSpeed = 5.0f;
	mHeight = 0;
	mWidth = 0;
	mPushBotton = FALSE;
	mCollisionFlag = FALSE;
}

//�f�X�g���N�^
Player::~Player()
{

}

//�v���C���[�摜�v�����[�h
void Player::Load()
{
	mImgHandle = LoadGraph("img/player.png");
	GetGraphSize(mImgHandle, &mWidth, &mHeight);
}

//�v���C���[�ړ�����
void Player::Update(float moveMapleftSpeed)
{
	int mouseX, mouseY;
	GetMousePoint(&mouseX, &mouseY);
	//�}�E�X���{�^����������ĂȂ����
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) == 0)
	{
		mPushBotton = FALSE;
	}
	//�E�ړ�
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && mouseX > 500 && mPushBotton == FALSE)
	{
		moveMapleftSpeed = GetSpeed();
		mPushBotton = TRUE;
	}
	//��ړ�
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && (mouseX < 500 && mouseY < 200) && mPushBotton == FALSE)
	{
		
		mPos.y -= mSpeed;
		mPushBotton = TRUE;
	}//���ړ�
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && (mouseX < 500 && mouseY > 200) && mPushBotton == FALSE)
	{
		mPos.y += mSpeed;
		mPushBotton = TRUE;
	}
	
	
}

//�A�C�e���g�p�m�F����
void Player::UsingItem()
{
}

//�v���C���[�̍��W��ݒ肷��
void Player::SetPosition(float posx, float posy)
{
	mPos.x = posx;
	mPos.y = posy;
}

//�G�l�~�[�Ƃ̓����蔻��
void Player::CollisionEnemy(float enemyPosX, float enemyPosY, int enemyWide, int enemyHeight)
{
	if (((mPos.x > enemyPosX && mPos.x < enemyPosX + enemyWide) ||
		(enemyPosX > mPos.x && enemyPosX < mPos.x + mWidth)) &&
		((enemyPosY > enemyPosY && mPos.y < enemyPosY + enemyHeight) ||
			(enemyPosY > mPos.y && enemyPosY < mPos.y + mHeight)))
	{
		
	}
}

//�v���C���[��`�悷��
void Player::Draw()
{
	DrawGraph(mPos.x, mPos.y, mImgHandle, TRUE);
}

