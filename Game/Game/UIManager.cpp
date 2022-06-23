#include "pch.h"
UIManager* UIManager::Maneger = nullptr;

UIManager::UIManager()
{
	UIManager::UPImgPosX= UPImgPosY = 0;
	UIManager::DownImgPosX= DownImgPosY=0;
	UIManager::RightImgPosX= RightImgPosY=0;
	UIManager::NowMousePosX= NowMousePosY=0;

}

UIManager::~UIManager()
{
}

void UIManager::CreateInstance()
{
	if (Maneger == nullptr)
	{
		Maneger = new UIManager();
	}
}

void UIManager::DeleteInstance()
{
	if (Maneger != nullptr)
	{
		Maneger = new UIManager();
	}
}

void UIManager::addUI(UIBase* ui)
{
	/*UI.pushback(ui);*/

	Maneger->UI.push_back(ui);
}

void UIManager::DeleteUI()
{
}

bool UIManager::InputFalgUP()
{
	if (((NowMousePosX > UPImgPosX && NowMousePosX < UPImgPosX + IMG_WIDTH) ||
		(UPImgPosX > NowMousePosX && UPImgPosX < NowMousePosX )) &&
		((NowMousePosY > UPImgPosY && NowMousePosY < UPImgPosY + IMG_HEIGHT) ||
			(UPImgPosY > NowMousePosY && UPImgPosY < NowMousePosY )))
	{
		// ÚG‚µ‚Ä‚¢‚é
		return true;
	}
	else
	{
		// ÚG‚µ‚Ä‚¢‚È‚¢
		return false;

	}
}

bool UIManager::InputFalgDown()
{
	if (((NowMousePosX > DownImgPosX && NowMousePosX < DownImgPosX + IMG_WIDTH) ||
		(DownImgPosX > NowMousePosX && DownImgPosX < NowMousePosX)) &&
		((NowMousePosY > DownImgPosY && NowMousePosY < DownImgPosY + IMG_HEIGHT) ||
			(DownImgPosY > NowMousePosY && DownImgPosY < NowMousePosY )))
	{
		// ÚG‚µ‚Ä‚¢‚é
		return true;
	}
	else
	{
		// ÚG‚µ‚Ä‚¢‚È‚¢
		return false;

	}
}

bool UIManager::InputFalgRight()
{
	if (((NowMousePosX > RightImgPosX && NowMousePosX < RightImgPosX + IMG_WIDTH) ||
		(RightImgPosX > NowMousePosX && RightImgPosX < NowMousePosX )) &&
		((NowMousePosY > RightImgPosY && NowMousePosY < RightImgPosY + IMG_HEIGHT) ||
			(RightImgPosY > NowMousePosY && RightImgPosY < NowMousePosY)))
	{
		// ÚG‚µ‚Ä‚¢‚é
		return true;
	}
	else
	{
		// ÚG‚µ‚Ä‚¢‚È‚¢
		return false;

	}
}


void UIManager::Update()
{
	if (InputFrame[MOUSE_INPUT_RIGHT] == 1)
	{
		GetMousePoint(&NowMousePosX, &NowMousePosY);
	}


	for (auto A : Maneger->UI)
	{
		A->Update();
	}
}

void UIManager::Draw()
{
	for (auto A : Maneger->UI)
	{
		A->Draw();
	}
}
