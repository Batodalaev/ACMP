//------------------------------------------------------------------------------
// unit1.cpp
//
// Copyright (c) 2020 ya_sayanb
// All rights reserved.
//
// Date: 14.06.2020
// Author: ya_sayanb
//------------------------------------------------------------------------------
#include <iostream>

// https://acmp.ru/index.asp?main=task&id_task=1
// Требуется сложить два целых числа А и В. 
int main(){
    //0. Объявление констант и переменных

    //2^31 > (10^9) * 2
    //Больше о размерах целочисленных типов тут:
    //https://ru.cppreference.com/w/cpp/language/types
    //https://www.viva64.com/ru/t/0012/
    //https://ru.cppreference.com/w/cpp/types/integer
    //Почему 31, а не 32? первый бит занят знаком числа.
    int_least32_t A, B, Result;

    //1. Ввод
    //Чтение двух натуральных чисел идущих друг за другом, каждое из которых не более 10^9 
    std::cin >> A >> B;

    //2. Обработка
    //Суммирование
    Result = A + B;

    //3. Вывод
    std::cout << Result;

    //system("pause");
    return 0;
}