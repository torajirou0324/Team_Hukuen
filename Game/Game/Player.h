#pragma once
#include"pch.h"
class Player
{
public:
	Player();
	~Player();
	void Load(const char* imgName);
	void Update(int speed);
	void SetPosition(float x, float y);
	int GetImgHeight();
	int GetImgWidth();
	void Draw();

private:
	VECTOR Pos;
	char imgName;
	int imgHandle;
	int height, width;
	

};
