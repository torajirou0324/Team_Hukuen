#pragma once
#include "pch.h"
#define IMG_WIDTH 64
#define IMG_HEIGHT 64

class UIManager
{
public:
	 UIManager();
	~UIManager();
	static void CreateInstance();
	static void DeleteInstance();
	static void addUI(UIBase* ui);
	static void DeleteUI();
	static bool InputFalgUP();
	static bool InputFalgDown();
	static bool InputFalgRight();

	static void Update();
	static void Draw();
private:
	static UIManager* Maneger;
	std::vector<UIBase*> UI;
	static int UPImgPosX, UPImgPosY;
	static int DownImgPosX, DownImgPosY;
	static int RightImgPosX, RightImgPosY;

	static int NowMousePosX, NowMousePosY;
};
