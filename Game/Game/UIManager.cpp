#include "pch.h"
UIManager* UIManager::Maneger = nullptr;

UIManager::UIManager()
{
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

	return false;
}

bool UIManager::InputFalgDown()
{
	return false;
}

bool UIManager::InputFalgRight()
{
	return false;
}


void UIManager::Update()
{
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
