#include "DxLib.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK); //�E�B���h�E���[�h�ύX�Ə������Ɨ���ʐݒ�

    while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {  //�X�N���[���o�b�t�@�̐؂�ւ��ƃv���Z�X���b�Z�[�W�����A��ʃN���A����

        //�����ɏ�����ǉ�
        int pos[2] = { 640 / 2, 420 / 2};
        DrawCircle( pos[0], pos[1], 80, GetColor(5, 100, 20));
        DrawFormatString(pos[0], pos[1], GetColor(255, 255, 255), "This is SUIKA!");
    }

    DxLib_End(); // DX���C�u�����I������
    return 0;
}