#include "src/Body.h"
#include "src/Menu.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
    //Доп. очистка массива
    int point_pool[4];
    for (int j = 0; j < 4; j++) {
        point_pool[j] = 0;
    }
    //Вывод меню и вызов функции Quiz с нужными базами текста
    while (1) {
        cout << "+-----------------------------------------------+\n"
                "|            QuizRunner's Test system           |\n"
                "|                      С++                      |\n"
                "|                  Выход - exit                 |\n"
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
                point_pool[lvl_token - 1] = Quiz("txt/1.txt", "txt/1_a.txt");
                cout << "Отвечено верно " << point_pool[lvl_token - 1] << " из 8\n";
                break;
            case 2:
                point_pool[lvl_token - 1] = Quiz("txt/2.txt", "txt/2_a.txt");
                cout << "Отвечено верно " << point_pool[lvl_token - 1] << " из 8\n";
                break;
            case 3:
                point_pool[lvl_token - 1] = Quiz("txt/3.txt", "txt/3_a.txt");
                cout << "Отвечено верно " << point_pool[lvl_token - 1] << " из 8\n";
                break;
            case 4:
                point_pool[lvl_token - 1] = Quiz("txt/4.txt", "txt/4_a.txt");
                cout << "Отвечено верно " << point_pool[lvl_token - 1] << " из 8\n";
                break;
            default:
                exit(2);
        }
    }
    return 0;
}
