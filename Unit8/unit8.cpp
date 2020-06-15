//------------------------------------------------------------------------------
// unit8.cpp
//
// Copyright (c) 2020 ya_sayanb
// All rights reserved.
//
// Date: 15.06.2020
// Author: ya_sayanb
//------------------------------------------------------------------------------
#include <iostream>

// https://acmp.ru/index.asp?main=task&id_task=8
//
int main(){
    //0. Объявление переменных
    const std::string Yes = "YES";
    const std::string No = "NO";

    uint_least32_t A, B, C;
    std::string Result;

    //1. Ввод
    std::cin>> A >> B >> C;

    //2. Обработка
    Result = A * B == C ? Yes : No;

    //3. Вывод
    std::cout << Result;

    //system("pause");
    return 0;
}