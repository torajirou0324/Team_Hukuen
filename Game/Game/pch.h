#pragma once

// �W���w�b�_�t�@�C��
#include <DxLib.h>

// �쐬�w�b�_�t�@�C��
#include "BackGround.h"
#include "Map.h"
#include "Player.h"

// �}�N���̒�`
// �E�B���h�E
const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;

// �w�i
const float SkySpeed = 1.0f;                     // ��̈ړ��X�s�[�h.
const int SkyImgNum = 6;                         // ��̉摜�̐�.
const int SkyImgWidth = 112;                     // ��̉摜�̉���(�s�N�Z���P��).
const char* SkyImgHandle = "img/sky.png";        // ��̉摜�n���h��.
const float CloudSpeed = 1.5f;                   // �_�̈ړ��X�s�[�h.
const int CloudImgNum = 2;                       // �_�̉摜�̐�.
const int CloudImgWidth = 544;                   // �_�̉摜�̉���(�s�N�Z���P��).
const char* CloudImgHandle = "img/clouds.png";   // �_�̉摜�n���h��.