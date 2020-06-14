//------------------------------------------------------------------------------
// unit3.cpp
//
// Copyright (c) 2020 ya_sayanb
// All rights reserved.
//
// Date: 14.06.2020
// Author: ya_sayanb
//------------------------------------------------------------------------------
#include <iostream>

// https://acmp.ru/index.asp?main=task&id_task=3
// Напишите программу, возводящую число, оканчивающееся на 5, в квадрат.
int main(){
    //0. Объявление переменных

    //Натуральное число, не превышающее 4*10^5.
    int_least32_t A;
    //2^63 > (4*10^5)^2 > 2^32
    int_least64_t Result;

    //1. Ввод
    std::cin >> A;

    //2. Обработка
    //Для начала надо привести к нужному типу, иначе может потерять часть данных.
    Result = int_least64_t(A) * A;

    //3. Вывод
    std::cout << Result;

    //system("pause");
    return 0;
}