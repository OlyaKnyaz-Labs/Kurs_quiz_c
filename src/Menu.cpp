#include "Check.h"
#include <iostream>
#include <string>
using namespace std;
int LevelStartMenu(int in_num) {
    int lvl;
    //ВЫБОР ПУНКТА МЕНЮ
    switch (in_num) {
        case 1:
            lvl = in_num;
            break;
        case 2:
            lvl = in_num;
            break;
        case 3:
            lvl = in_num;
            break;
        case 4:
            lvl = in_num;
            break;
        default:
            lvl = 0;
    }
    return (lvl);
}
int StartMenuDrop() {

    string key_in;
    int lvl = 0;
    while (lvl == 0) {
        cout << "\nВведите корректное значение (1-4)\n";
        cin >> key_in;
        if (key_in == "exit") {
            exit(0);
        }
        int key_formatted = InputCheck(key_in.c_str());
        if (key_formatted == 1337) {
            exit(0);
        }

        cout << "Выбрано " << key_formatted;
        lvl = LevelStartMenu(key_formatted);
    }
    return (lvl);
}