#include "Check.h"
#include <iostream>
#include <string>
//Считывание int значений из string переменных
int InputCheck(std::string getLevelNumber)
{
    int Number = 0;
    Number = atoi(getLevelNumber.c_str()); //
    return Number;
}
