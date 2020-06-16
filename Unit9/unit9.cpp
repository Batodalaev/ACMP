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
#include <numeric>
#include <algorithm>

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
    auto SumIfPositive = [](auto sum, auto add)
    {
        return add > 0 ? sum + add : sum;
    };
    ResultSum = std::accumulate(Numbers.begin(), Numbers.end(), Numbers[0], SumIfPositive);

    //Нахождение позиций наибольшего и наименьшего числа
    auto minElement = std::min_element(Numbers.begin(), Numbers.end());
    auto maxElement = std::max_element(Numbers.begin(), Numbers.end());
    
    std::cout << "Debug " << *minElement << ' ' << *maxElement << std::endl;

    //TODO учесть что они могут не быть соседними, или массив пустой. для текущей задачи не требуется.
    auto lowBounds = std::min(minElement, maxElement) + 1;
    auto highBounds = std::max(minElement, maxElement);

    std::cout << "Debug " << *lowBounds << ' ' << *highBounds << std::endl;

    //Нахождение произведения всех элементов между найденными позициями
    auto Multiply = [](auto mult, auto add)
    {
        return mult * add;
    };
    ResultMultiply = std::accumulate(lowBounds, highBounds, *lowBounds, Multiply);

    //3. Вывод
    std::cout << ResultSum << ' ' << ResultMultiply;

    //system("pause");
    return 0;
}