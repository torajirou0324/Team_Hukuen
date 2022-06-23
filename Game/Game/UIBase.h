#pragma once
class UIBase
{
public:
	UIBase();
	~UIBase();
	virtual void Update();
	virtual void Draw();
protected:
	int ButtonHandle;
	int ButtonPushHandle;
	bool ButtonFlag;

};

