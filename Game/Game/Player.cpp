#include "pch.h"
Player::Player()
{
	Pos.x = 0.0f;
	Pos.y = 0.0f;
	Pos.z = 0.0f;

	imgHandle = -1;

	height = 0;
	width = 0;
}

Player::~Player()
{
	DeleteGraph(imgHandle);
}

void Player::Load(const char* imgName)
{
	imgHandle = LoadGraph("img/player.png");
}

void Player::Update(int speed)
{
	int mouseX, mouseY;
	GetMousePoint(&mouseX, &mouseY);
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && mouseX > 500)
	{
		Pos.x += speed;
	}
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0 && mouseX < 500)
	{
		Pos.x -= speed;
	}
}

void Player::SetPosition(float x, float y)
{
	Pos.x = x;
	Pos.y = y;
}

int Player::GetImgHeight()
{
	return height;
}

int Player::GetImgWidth()
{
	return width;
}

void Player::Draw()
{
	DrawGraph(Pos.x, Pos.y, imgHandle, TRUE);
}
