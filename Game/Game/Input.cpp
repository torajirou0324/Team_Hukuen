#include "pch.h"
int Key[256];

int UpdateKey()
{
    char tmpKey[256];          // ���݂̃L�[�̓��͏�Ԃ��i�[����
    
    if (GetMouseInput())
    {
        for (int i = 0; i < 256; i++)
        {
            if (tmpKey[i] != 0) // i�Ԃ̃L�[�R�[�h�ɑΉ�����L�[��������Ă�����
            {
                Key[i]++;       // ���Z
            }
            else                // ������Ă��Ȃ����
            {
                Key[i] = 0;     // 0�ɂ���
            }
        }
    }
    
    return 0;
}