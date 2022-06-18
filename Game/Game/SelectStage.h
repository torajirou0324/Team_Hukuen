#pragma once
#include "SceneBase.h"
class SelectStage : public SceneBase
{
public:
	// �R���X�g���N�^
	SelectStage();
	// �f�X�g���N�^
	~SelectStage();
	// �`��
	void Draw()override;
	// �X�V
	SceneBase* Update()override;

private :
	// �X�e�[�W�P�̉摜
	const int mStage1Image = LoadGraph("Img/karidata/stage1.png");
	// �X�e�[�W�P�̉摜���WX
	int mStage1ImagePosX;
	// �X�e�[�W�P�̉摜���W
	int mStageImagePosY;
	// �X�e�[�W�摜��
	int mStageImageW;
	// �X�e�[�W�摜����
	int mStageImageH;

};

