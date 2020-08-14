#include "Check.h"
#include <iostream>
#include <string>
using namespace std;
int LevelStartMenu(int in_num) {
    int lvl;
    //ВЫБОР ПУНКТА МЕНЮ
    switch (in_num) {
        case 1:
            cout << "Переменные ";
            lvl = in_num;
            break;
        case 2:
            cout << "Функции";
            lvl = in_num;
            break;
        case 3:
            cout << "Верно /неверно ";
            lvl = in_num;
            break;
        case 4:
            cout << "Микс  ";
            lvl = in_num;
            break;
        default:
            cout << "Ничему,введите значение еще раз ";
            lvl = 0;
    }
    return (lvl);
}
int StartMenuDrop() {

    string key_in;
    int lvl = 0;
    while (lvl == 0) {
        cin >> key_in;
        if (key_in == "exit") {
            exit(0);
        }
        int key_formatted = InputCheck(key_in.c_str());
        if (key_formatted == 1337) {
            exit(0);
        }

        cout << "Выбрано " << key_formatted << " . Это соответствует ";
        lvl = LevelStartMenu(key_formatted);
    }
    return (lvl);
}