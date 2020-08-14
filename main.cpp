#include <fstream>
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


int Comparse(string in, string check) {
    if (in == check) {
        return (1);
    } else {
        return (0);
    }
}
int Ask(string quest, string answer) {
    cout << endl
         << "____________________" << endl
         << quest << endl
         << "Ваш ответ: ";
    string key_str;
    cin >> key_str;
    int check = Comparse(key_str, answer);
    if (check == 1) {
        cout << "И он верен" << endl;
        return (1);
    } else {
        cout << "И он неверен" << endl;
        return (0);
    }
}
int Quiz(const string &path1, const string &path2) {
    int size = 8;
    string quiz_src[size], quiz_answer[size], temp;
    //ЗАПОЛНЕНИЕ ПУЛА ВОПРОСОВ
    ifstream file1(path1);
    int i = 0;
    while (getline(file1, temp, '\n')) {
        quiz_src[i] = temp;

        i++;
    }
    //ЗАПОЛНЕНИЕ ПУЛА ОТВЕТОВ
    ifstream file2(path2);
    i = 0;
    while (getline(file2, temp, '\n')) {
        quiz_answer[i] = temp;

        i++;
    }
    //ПРОВЕРКА СОВПАДЕНИЯ
    /* for (int j = 0; j < size; j++) {
         cout << endl
              << quiz_src[j] << "--" << quiz_answer[j];
     }*/
    for (int j = 0; j < 8; j++) {

        Ask(quiz_src[j], quiz_answer[j]);
    }
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
    int lvl_token = StartMenuDrop();
    switch (lvl_token) {

        case 1:
            Quiz("QuizSource_Var.txt", "QuizSource_Var_answer.txt");
            break;
        default:
            exit(2);
    }
    return 0;
}
