//------------------------------------------------------------------------------
// unit9.cpp
//
// Copyright (c) 2020 ya_sayanb
// All rights reserved.
//
// Date: 16.06.2020
// Author: ya_sayanb
//------------------------------------------------------------------------------
#include <iostream>
#include <vector>

// https://acmp.ru/index.asp?main=task&id_task=9
//
int main(){
    //0. Объявление констант и переменных

    //2^15 > 3*10^4
    int_least16_t N, ResultSum, ResultMultiply;
    std::vector<int_least16_t> Numbers; 

    //1. Ввод
    std::cin >> N;

    Numbers.resize(N);
    for(size_t i = 0; i < N; i++)
    {
        std::cin >> Numbers[i];
    }

    //2. Обработка
    
    //Нахождение суммы всех положительных чисел
    //std::accumulate sum only positive

    //Нахождение позиций наибольшего и наименьшего числа
    //std::min_element
    //std::max_element

    //Нахождение произведения всех элементов между найденными позициями
    //std::accumulate multiply

    //3. Вывод
    std::cout << ResultSum << ' ' << ResultMultiply;

    //system("pause");
    return 0;
}