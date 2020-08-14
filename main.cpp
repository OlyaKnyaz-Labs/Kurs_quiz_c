#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int InputCheck(const char *in_line) {
    //НАХОЖДЕНИЕ ЧИСЛОВОГО ЗНАЧЕНИЯ В ВЫБОРЕ МЕНЮ
    int ch_num = atoi(in_line);
    return (ch_num);
}
int LevelStartMenu(int in_num) {
    int lvl;
    switch (in_num) {
        case 1:
            cout << "Переменные ";
            lvl = in_num;
            break;
        case 2:
            cout << "Синтаксис(Найдите ошибку в кусочке кода)";
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


int Comparse(const string &in, const string &check) {
    if (in == check) {
        return (1);
    } else {
        return (0);
    }
}
int Ask(const string &quest, const string &answer) {
    cout << endl
         << "____________________" << endl
         << quest << endl
         << "Ваш ответ: ";
    string key_str;
    cin >> key_str;
    //ПРОВЕРКА ВВЕДЕННОГО ОТВЕТА С НУЖНЫМ
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
    int points = 0;
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

        points += Ask(quiz_src[j], quiz_answer[j]);
    }
    return (points);
}
int StartMenuDrop() {

    string key_in;
    int lvl = 0;
    while (lvl == 0) {
        cin >> key_in;
        int key_formatted = InputCheck(key_in.c_str());

        cout << "Выбрано " << key_formatted << " . Это соответствует ";
        lvl = LevelStartMenu(key_formatted);
    }
    return (lvl);
}
int main() {
    int point_pool[4];
    for (int j = 0; j < 4; j++) {
        point_pool[j] = 0;
    }
    while (1) {
        cout << "+-----------------------------------------------+\n"
                "|            QuizRunner's Test system           |\n"
                "|                                               |\n"
                "|                      С++                      |\n"
                "|                    СУММА - "
             << point_pool[0] + point_pool[1] + point_pool[3] + point_pool[2] << "                  |\n"
                                                                                 "+-----------------------------------------------+\n"
                                                                                 "|Переменные -1          |Функции  -2            |\n"
                                                                                 "|Баллов-"
             << point_pool[0] << "               |Баллов-" << point_pool[1] << "               |\n"
                                                                               "+-----------------------------------------------+\n"
                                                                               "|Верно /неверно -3      |Микс  -4               |\n"
                                                                               "|Баллов-"
             << point_pool[2] << "               | Баллов-" << point_pool[3] << "              |\n"
                                                                                "+-----------------------+-----------------------+\n";

        int lvl_token = StartMenuDrop();

        switch (lvl_token) {

            case 1:
                point_pool[lvl_token - 1] = Quiz("1.txt", "1_a.txt");
                cout << "Отвечено верно " << point_pool[lvl_token - 1] << " из 8\n";
                break;
            case 2:
                point_pool[lvl_token - 1] = Quiz("2.txt", "2_a.txt");
                cout << "Отвечено верно " << point_pool[lvl_token - 1] << " из 8\n";
                break;
            case 3:
                point_pool[lvl_token - 1] = Quiz("3.txt", "3_a.txt");
                cout << "Отвечено верно " << point_pool[lvl_token - 1] << " из 8\n";
                break;
            case 4:
                point_pool[lvl_token - 1] = Quiz("4.txt", "4_a.txt");
                cout << "Отвечено верно " << point_pool[lvl_token - 1] << " из 8\n";
                break;
            default:
                exit(2);
        }
    }
    return 0;
}
