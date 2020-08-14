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
            cout << "Переменные";
            lvl = in_num;
            break;
        case 2:
            cout << "Синтаксис";
            lvl = in_num;
            break;
        case 3:
            cout << "Верно /неверно";
            lvl = in_num;
            break;
        case 4:
            cout << "Микс  ";
            lvl = in_num;
            break;
        default:
            cout << "Ничему,введите значение еще раз";
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
    while (1) {
        cin >> key_in;
        InputCheck(key_in.c_str());
        cout << "Выбрано " << InputCheck(key_in.c_str()) << " . Это соответствует ";
    }
}
int main() {
    StartMenuDrop();
    return 0;
}
