#include <fstream>
#include <iostream>
#include <string>
using namespace std;
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