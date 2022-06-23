#pragma once
#include "pch.h"
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
};
