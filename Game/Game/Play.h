#pragma once
#include "SceneBase.h"
class Play : public SceneBase
{
public:
	// �R���X�g���N�^
	Play();
	// �f�X�g���N�^
	~Play();
	// �`��
	void Draw();
	// �X�V
	TAG_SCENE Update()override;

	/// <summary>
	/// �ϐ��̏�����.
	/// </summary>
	Map* map = new Map();          // �w�i�̐���.

};

