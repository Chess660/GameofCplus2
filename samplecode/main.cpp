#include "janken.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
    string choice;
    cout << "select game " << endl;
    cin >> choice;

    if (choice == "janken"){
        janken game;
        game.start();
    } else {
        cout << "無効な選択です。" << endl;
    }
    return 0;

}