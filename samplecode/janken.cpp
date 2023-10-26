#include "janken.h"

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

janken::janken(){
    string hand, opphand ;
    srand((unsigned int)time(NULL)); // 乱数の種を初期化（プログラムの先頭で1回のみ）
}
janken::~janken() {
    // デストラクタ: ゲームの終了処理などを行う場合に使用
}

void janken::start()
{
    while(1){
        cout <<"最初はグー！じゃんけん！(guu, choki, paaから選択)" << endl;
        string userChoice = getUserChoice();
        string computerChoice = getComputerChoice();
        cout << "コンピュータの選択: " << computerChoice << endl;
        cout << "あなたの選択: " << userChoice << endl;
        if(determineWinner(userChoice,computerChoice)){
            break;
        }

    }
}
string janken::getUserChoice(){
    string hand;
    while(1){
        cin >> hand;
        cout << "you choose " << hand << endl;
        if(hand != "guu" && hand != "choki" && hand != "paa"){
            cout << "もう一度入力してね" << endl;
        }else{
            return hand; 
        }
    }
}

string janken::getComputerChoice(){
    const string choices[] = { "guu", "choki", "paa" };
    const int numChoices = 3;
    string comhand;
    int computerChoice = rand() % numChoices;
    switch(computerChoice){
        case 0:
            comhand = "guu";
            break;
        case 1:
            comhand = "choki";
            break;
        case 2:
            comhand = "paa";
            break;
            
    }
    return comhand;
}

bool janken::determineWinner(const string& userChoice, const string& computerChoice) {
    if (userChoice == computerChoice) {
        cout << "引き分けです！" << endl;
    } else if ((userChoice == "guu" && computerChoice == "choki") ||
               (userChoice == "choki" && computerChoice == "paa") ||
               (userChoice == "paa" && computerChoice == "guu")) {
        cout << "あなたの勝ちです！" << endl;
        return 1;
    } else {
        cout << "コンピュータの勝ちです！" << endl;
        return 1;
    }
    return 0;
}