#pragma once
class Button :public UIBase
{
public:
	Button();//コンストラクタ
	~Button();//デストラクタ

	void Update() override;
	void Draw() override;
	
};

