//------------------------------------------------------------------------------
// unit5.cpp
//
// Copyright (c) 2020 ya_sayanb
// All rights reserved.
//
// Date: 14.06.2020
// Author: ya_sayanb
//------------------------------------------------------------------------------
#include <iostream>
#include <vector>

// https://acmp.ru/index.asp?main=task&id_task=5
// 
int main(){
    //0. Объявление переменных
    const std::string Yes = "YES";
    const std::string No = "NO";

    //int8_t == char, потому придется пользоваться short
    uint_least16_t N;
    int_least8_t Result;
    std::vector<uint_least16_t> DynamicArray;

    //Лямбда-выражение проверки на четность
    auto IsEven = [](auto number){return number % 2 == 0;};
     
    //1. Ввод
    std::cin >> N;

    DynamicArray.resize(N);
    for(size_t i = 0 ; i < N ; i++)
        std::cin >> DynamicArray[i]; 
    
    //2. Обработка
    Result = 0;
    for(size_t i = 0 ; i < N ; i++)
        Result += IsEven(DynamicArray[i]) ? 1 : -1;

    //3. Вывод

    //Пишем все нечетные даты в порядке ввода
    for(size_t i = 0 ; i < N ; i++)
        if(!IsEven(DynamicArray[i]))
            std::cout << DynamicArray[i] << ' ';
    std::cout << std::endl;

    //Пишем все четные даты в порядке ввода
    for(size_t i = 0 ; i < N ; i++)
        if(IsEven(DynamicArray[i]))
            std::cout << DynamicArray[i] << ' ';
    std::cout << std::endl;

    //Ну и искомый ответ
    if(Result >= 0)
        std::cout << Yes;
    else
        std::cout << No;

    //system("pause");
    return 0;
}