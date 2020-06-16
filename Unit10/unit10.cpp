//------------------------------------------------------------------------------
// unit10.cpp
//
// Copyright (c) 2020 ya_sayanb
// All rights reserved.
//
// Date: 16.06.2020
// Author: ya_sayanb
//------------------------------------------------------------------------------
#include <iostream>
#include <vector>

// https://acmp.ru/index.asp?main=task&id_task=10
//
int main(){
    //0. Объявление констант и переменных
    const int_least64_t Min = -100, Max = 100;
    int_least64_t A, B, C, D;
    std::vector<int_least64_t> Result;

    //1. Ввод
    std::cin >> A >> B >> C >> D;

    //2. Обработка
    for(auto i = Min; i <= Max; i++)
    {
        if(A * i * i * i + B * i * i + C * i + D == 0)
            Result.push_back(i);
    }

    //3. Вывод
    for (const auto i: Result)
        std::cout << i << ' ';

    //system("pause");
    return 0;
}