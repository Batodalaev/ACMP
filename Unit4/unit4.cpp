//------------------------------------------------------------------------------
// unit0.cpp
//
// Copyright (c) 2020 ya_sayanb
// All rights reserved.
//
// Date: 14.06.2020
// Author: ya_sayanb
//------------------------------------------------------------------------------
#include <iostream>

// https://acmp.ru/index.asp?main=task&id_task=4
int main(){
    //0. Объявление переменных
    int_least16_t K, Result;

    //1. Ввод
    std::cin >> K;

    //2. Обработка
    Result = K * 100 + 90 + (9 - K);

    //3. Вывод
    std::cout << Result;

    //system("pause");
    return 0;
}