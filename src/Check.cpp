#include "Check.h"
#include <iostream>
#include <string>
int InputCheck(std::string getLevelNumber)
{
    int Number = 0;
    Number = atoi(getLevelNumber.c_str()); //
    return Number;
}
