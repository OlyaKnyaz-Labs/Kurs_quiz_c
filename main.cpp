#include <iostream>
#include <string>
using namespace std;
int InputCheck(const char *in_line) {
    int ch_num = atoi(in_line);
    return (ch_num);
};
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
    cin >> key_in;
    InputCheck(key_in.c_str());
    cout << InputCheck(key_in.c_str());
}
int main() {
    StartMenuDrop();
    return 0;
}
