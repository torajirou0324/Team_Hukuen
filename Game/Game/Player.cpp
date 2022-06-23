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
void Player::Update()
{
	//���ꂼ��̃{�^���̍��W�Ɨ����A����
	int rightBottunX = 0, rightBottunY = 0, rightBottunW = 0, rightBottunH = 0;
	int leftBottunX = 0, leftBottunY = 0, leftBottunW = 0, leftBottunH = 0;
	int upBottunX = 0, upBottunY = 200, upBottunW = 100, upBottunH = 100;

	//�}�E�X�|�C���^��X���W��Y���W
	int mouseX, mouseY;
	//�}�E�X�|�C���^�̌��݈ʒu�̎擾
	GetMousePoint(&mouseX, &mouseY);

	//�}�E�X���{�^����������ĂȂ����
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) == 0)
	{
		mPushBotton = FALSE;
	}
	//�E�ړ�
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && 
		((mouseX < rightBottunX && mouseX > rightBottunX + rightBottunW) &&
		(mouseY < rightBottunY && mouseY > rightBottunY + rightBottunH)) && 
		mPushBotton == FALSE)
	{
		mPushBotton = TRUE;
	}
	//��ړ�
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && 
		((mouseX > upBottunX && mouseX < upBottunX + upBottunW) ||
		(mouseY > upBottunY && mouseY < upBottunY + upBottunH)) &&
		mPushBotton == FALSE)
	{
		if (mPos.y < 200)
		{
			mPos.y -= mSpeed;
		}
		else
		{
			mPushBotton = TRUE;
		}
	}//���ړ�
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && 
		((mouseX < leftBottunX && mouseX > leftBottunX + leftBottunW) &&
		(mouseY < leftBottunY && mouseY > leftBottunY + leftBottunH)) &&
		mPushBotton == FALSE)
	{
		if (mPos.y < 150)
		{
			mPos.y += mSpeed;
		}
		else
		{
			mPushBotton = TRUE;
		}
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
		mCollisionFlag = TRUE;
	}
}

//�v���C���[��`�悷��
void Player::Draw()
{
	DrawGraph(mPos.x, mPos.y, mImgHandle, TRUE);
}

