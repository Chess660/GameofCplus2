#include "DxLib.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK); //ウィンドウモード変更と初期化と裏画面設定

    while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {  //スクリーンバッファの切り替えとプロセスメッセージ処理、画面クリア処理

        //ここに処理を追加
        int pos[2] = { 640 / 2, 420 / 2};
        DrawCircle( pos[0], pos[1], 80, GetColor(5, 100, 20));
        DrawFormatString(pos[0], pos[1], GetColor(255, 255, 255), "This is SUIKA!");
    }

    DxLib_End(); // DXライブラリ終了処理
    return 0;
}