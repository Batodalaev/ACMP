//------------------------------------------------------------------------------
// unit7.cpp
//
// Copyright (c) 2020 ya_sayanb
// All rights reserved.
//
// Date: 15.06.2020
// Author: ya_sayanb
//------------------------------------------------------------------------------
#include <iostream>
#include <algorithm>
#include <vector>

// https://acmp.ru/index.asp?main=task&id_task=7
//
int main(){
    //0. Объявление констант и переменных
    std::vector<std::string> Numbers;
    std::string Result;

    //1. Ввод
    for(size_t i = 0; i < 3; i++)
    {
        //Читаем число до пробела
        std::string buf;
        std::cin >> buf;
        Numbers.push_back(buf);
    }

    //2. Обработка

    //TODO нет проверки на валидность данных. в текущей задаче и не требуется

    //Поиск наибольшего натурального числа
    auto findGreatest = [](const std::string& left, const std::string& right)
    {
        //Сначала длины сравниваем, т.к. у нас нет ведущих нулей
        if(left.size() != right.size())
            return left.size() < right.size();
        
        size_t size = left.size();
        for(size_t i = 0 ; i < size; i++)
        {
            //Посимвольно сравниваем
            //'0' < '9' 
            if(left[i] != right[i])
                return left[i] < right[i];
        }

        //Одинаковы
        return false;
    };
    Result = *(std::max_element(Numbers.begin(), Numbers.end(), findGreatest));

    //3. Вывод
    std::cout << Result;

    //system("pause");
    return 0;
}