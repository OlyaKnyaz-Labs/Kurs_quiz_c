#include <iostream>
#include <string>
using namespace std;
int InputCheck(const char *in_line) {
    int ch_num = atoi(in_line);
    return (ch_num);
};
int LevelStartMenu(int in_num) {
    int lvl;
    switch (in_num) {
        case 1:
            cout << "Переменные ";
            lvl = in_num;
            break;
        case 2:
            cout << "Синтаксис ";
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
    cout << "+-----------------------------------------------+\n"
            "|            QuizRunner's Test system           |\n"
            "|                                               |\n"
            "|                      С++                      |\n"
            "|                                               |\n"
            "+-----------------------------------------------+\n"
            "|Переменные             |Синтаксис              |\n"
            "|                       |                       |\n"
            "+-----------------------------------------------+\n"
            "|Верно /неверно         |Микс                   |\n"
            "|                       |                       |\n"
            "+-----------------------+-----------------------+\n";

    string key_in;
    int lvl = 0;
    while (lvl == 0) {
        cin >> key_in;
        int key_formatted = InputCheck(key_in.c_str());
        ;
        cout << "Выбрано " << key_formatted << " . Это соответствует ";
        lvl = LevelStartMenu(key_formatted);
    }
    return (lvl);
}
int main() {
    cout << StartMenuDrop();
    return 0;
}
