#pragma once
#include"pch.h"

/// <summary>
/// �w�i�N���X.
/// </summary>
class Background
{
public:
	/// <summary>
	/// �R���X�g���N�^�A�ϐ��������֐�.
	/// </summary>
	Background();

	/// </summary>
	/// �f�X�g���N�^�A�f�[�^�̍폜�ƃ������̉��������֐�.
	/// </summary>
	~Background();

	/// <summary>
	/// �ǂݍ��݊֐�.
	/// </summary>
	/// <param name="imgName"></param>
	void Load(const char* imgName);

	/// <summary>
	/// �X�V�֐�.
	/// </summary>
	void Update(float speed);

	/// <summary>
	/// �`��֐�.
	/// </summary>
	void Draw();

	/// <summary>
	/// �w�i�摜�̍��W��ݒ肷��֐�.
	/// �I�[�o�[���[�h�֐�.
	/// </summary>
	/// <param name="pos">VECTOR�^��pos.</param>
	void SetPosition(VECTOR pos)
	{
		mPos.x = pos.x;
		mPos.y = pos.y;
	}

	/// <summary>
	/// �w�i�摜�̍��W��ݒ肷��֐�.
	/// �I�[�o�[���[�h�֐�.
	/// </summary>
	/// <param name="pos">float�^��pos.</param>
	void SetPosition(float x, float y)
	{
		mPos.x = x;
		mPos.y = y;
	}

	/// <summary>
	/// �c���̎擾�֐�.
	/// </summary>
	/// <returns>���̉摜�̏c��(int�^)</returns>
	int GetImgHeight()
	{
		return mHeight;
	}

	/// <summary>
	/// �����̎擾�֐�.
	/// </summary>
	/// <returns>���̉摜�̉���(int�^).</returns>
	int GetImgWidth()
	{
		return mWidth;
	}

private:
	VECTOR mPos;           // ���W�ۑ��ϐ�.
	int mHeight, mWidth;   // �c���A�����̕ۑ��ϐ�.
	int mImgHandle;        // �摜�n���h���ۑ��ϐ�.
};