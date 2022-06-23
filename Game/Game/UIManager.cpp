#include "pch.h"
UIManager* UIManager::uiManeger = nullptr;

UIManager::UIManager()
{
	pos p;
	p.x = 0;
	p.y = 0;
	for (auto i = 0; i < TYPE::END; i++)
	{
		keypos.push_back(p);
	}
}

UIManager::~UIManager()
{
}

void UIManager::CreateInstance()
{
	if (uiManeger == nullptr)
	{
		uiManeger = new UIManager();
	}
}

void UIManager::DeleteInstance()
{
	if (uiManeger != nullptr)
	{
		uiManeger = new UIManager();
	}
}

void UIManager::addUI(UIBase* ui)
{
	/*UI.pushback(ui);*/

	uiManeger->UI.push_back(ui);
}

void UIManager::DeleteUI()
{
}

bool UIManager::InputFalgUP()
{
	if (((uiManeger->keypos[MOUSE].x > uiManeger->keypos[UP].x && uiManeger->keypos[MOUSE].x < uiManeger->keypos[UP].x + IMG_WIDTH) ||
		(uiManeger->keypos[UP].x > uiManeger->keypos[MOUSE].x && uiManeger->keypos[UP].x < uiManeger->keypos[MOUSE].x )) &&
		((uiManeger->keypos[MOUSE].y > uiManeger->keypos[UP].y && uiManeger->keypos[MOUSE].y < uiManeger->keypos[UP].y + IMG_HEIGHT) ||
			(uiManeger->keypos[UP].y > uiManeger->keypos[MOUSE].y && uiManeger->keypos[UP].y < uiManeger->keypos[MOUSE].y )))
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
	if (((uiManeger->keypos[MOUSE].x > uiManeger->keypos[DOWN].x && uiManeger->keypos[MOUSE].x < uiManeger->keypos[DOWN].x + IMG_WIDTH) ||
		(uiManeger->keypos[DOWN].x > uiManeger->keypos[MOUSE].x && uiManeger->keypos[DOWN].x < uiManeger->keypos[MOUSE].x)) &&
		((uiManeger->keypos[MOUSE].y > uiManeger->keypos[DOWN].y && uiManeger->keypos[MOUSE].y < uiManeger->keypos[DOWN].y + IMG_HEIGHT) ||
			(uiManeger->keypos[DOWN].y > uiManeger->keypos[MOUSE].y && uiManeger->keypos[DOWN].y < uiManeger->keypos[MOUSE].y)))
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
	if (((uiManeger->keypos[MOUSE].x > uiManeger->keypos[RIGHT].x && uiManeger->keypos[MOUSE].x < uiManeger->keypos[RIGHT].x + IMG_WIDTH) ||
		(uiManeger->keypos[RIGHT].x > uiManeger->keypos[MOUSE].x && uiManeger->keypos[RIGHT].x < uiManeger->keypos[MOUSE].x )) &&
		((uiManeger->keypos[MOUSE].y > uiManeger->keypos[RIGHT].y && uiManeger->keypos[MOUSE].y < uiManeger->keypos[RIGHT].y + IMG_HEIGHT) ||
			(uiManeger->keypos[RIGHT].y > uiManeger->keypos[MOUSE].y && uiManeger->keypos[RIGHT].y < uiManeger->keypos[MOUSE].y )))
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
		GetMousePoint(&uiManeger->keypos[MOUSE].x, &uiManeger->keypos[MOUSE].y);
	}


	for (auto A : uiManeger->UI)
	{
		A->Update();
	}
}

void UIManager::Draw()
{
	for (auto A : uiManeger->UI)
	{
		A->Draw();
	}
}
