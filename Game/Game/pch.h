#pragma once

// �W���w�b�_�t�@�C��
#include <DxLib.h>

// �}�N���̒�`
// �E�B���h�E
const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;

/*
* �w�i.
*/

// ��.
const float SkySpeed = 0.5f;       // ��̈ړ��X�s�[�h.
const int SkyImgNum = 8;           // ��̉摜�̐�.
const int SkyImgWidth = 112;       // ��̉摜�̉���(�s�N�Z���P��).

// �_.
const float CloudsSpeed = 1.0f;    // �_�̈ړ��X�s�[�h.
const int CloudsImgNum = 4;        // �_�̉摜�̐�.
const int CloudsImgWidth = 544;    // �_�̉摜�̉���(�s�N�Z���P��).

// ����.
const float GrassSpeed = 1.0f;     // �����̈ړ��X�s�[�h.
const int GrassImgNum = 3;         // �����̉摜�̐�.
const int GrassImgWidth = 800;     // �����̉摜�̉���(�s�N�Z���P��).

/*
* 
*/

// �쐬�w�b�_�t�@�C��
#include "BackGround.h"
#include "Map.h"
#include "Player.h"