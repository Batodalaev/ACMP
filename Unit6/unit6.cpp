//------------------------------------------------------------------------------
// unit6.cpp
//
// Copyright (c) 2020 ya_sayanb
// All rights reserved.
//
// Date: 15.06.2020
// Author: ya_sayanb
//------------------------------------------------------------------------------
#include <iostream>

// https://acmp.ru/index.asp?main=task&id_task=6
// 

int main(){
    
    //0. Объявление переменных
    const std::string Yes = "YES";
    const std::string No = "NO";
    const std::string Error = "ERROR";

    std::string move;

    enum class Result : int_least8_t {Error, No, Yes};
    Result result = Result::Yes;

    //1. Ввод
    std::cin >> move;

    //2. Обработка
    
    //Проверяем на корректность
    
    //Не забываем про символ конца строки
    if(move.size() != 5)//6 || move[5] != '\0')
        result = Result::Error;

    if(result == Result::Yes)
    {
        bool isCorrect = true;

        isCorrect &= move[0] >= 'A' && move[0] <= 'H';
        isCorrect &= move[1] >= '1' && move[1] <= '8';
        isCorrect &= move[2] == '-';
        isCorrect &= move[3] >= 'A' && move[3] <= 'H';
        isCorrect &= move[4] >= '1' && move[4] <= '8';

        if(!isCorrect)
            result = Result::Error;
    }
    
    //Проверяем на правильность
    if(result == Result::Yes)
    {
        bool isRight = false;

        isRight |= std::abs(move[0] - move[3]) == 1 && std::abs(move[1] - move[4]) == 2;
        isRight |= std::abs(move[0] - move[3]) == 2 && std::abs(move[1] - move[4]) == 1;

        if(!isRight)
            result = Result::No;
    }

    //3. Вывод
    switch(result)
    {
        case Result::Yes:
            std::cout << Yes;
            break;
        case Result::No:
            std::cout << No;
            break;
        case Result::Error:
        default:
            std::cout << Error;
    }

    //system("pause");
    return 0;
}