#pragma once
#include "pch.h"
#define IMG_WIDTH 64
#define IMG_HEIGHT 64

enum TYPE
{
	UP,
	DOWN,
	RIGHT,
	MOUSE,
	END
};

class UIManager
{
public:
	// ÉRÉsÅ[ã÷é~
	UIManager(const UIManager&) = delete;
	UIManager& operator=(const UIManager&) = delete;

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
	static UIManager* uiManeger;
	struct pos
	{
		int x;
		int y;
	};
	std::vector<pos> keypos;
	std::vector<UIBase*> UI;
};
