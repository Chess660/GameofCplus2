#ifndef JANKEN_H
#define JANKEN_H

#include <iostream>

class janken{
    public:
        janken();  // コンストラクタ
        ~janken(); // デストラクタ
        void start();

    private:
        std::string getUserChoice();
        std::string getComputerChoice();
        void determineWinner(const std::string& userChoice, const std::string& computerChoice);
};

#endif