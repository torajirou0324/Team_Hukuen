#include "pch.h"

#define KEYNUM 256

int InputFrame[KEYNUM];

/// <summary>
/// �u���t���[��������Ă��邩�v���v�Z����
/// </summary>
/// <returns></returns>
int UpdateKey()
{
    // �}�E�X���͏�Ԃ𓾂�
    int mMouseInput = GetMouseInput() & MOUSE_INPUT_RIGHT;

    for (int i = 0; i < 256; i++)
    {
        // i�Ԃ̃L�[�R�[�h�ɑΉ�����L�[��������Ă�����
        if (mMouseInput != 0)
        {
            // ���Z
            InputFrame[i]++;
        }
        // ������Ă��Ȃ����
        else
        {
            // 0�ɂ���
            InputFrame[i] = 0;
        }
    }
    return 0;
}
