#include "Check.h"
#include <iostream>

#ifndef KEYBOARD_NINJA_INPUTCHECK_H
#define KEYBOARD_NINJA_INPUTCHECK_H
#include <string>
int InputCheck(std::string getLevelNumber) {
    int Number = 0;
    Number = atoi(getLevelNumber.c_str());//
    return Number;
}
#endif// KEYBOARD_NINJA_INPUTCHECK_H