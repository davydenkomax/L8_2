/*
    Дана строка, состоящая из слов, разделенных пробелами (одним или
    несколькими). Найти длину самого длинного слова.
*/
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    // Изменение кодировки
    system("chcp 1251");
    // Объявление переменных
    string s;
    string symbols = {" ,;:.!?'*-"};
    int max_len_word = 0, len_word = 0;
    bool not_symbol;
    // Ввод строки
    getline(cin, s);
    // Цикл по строке
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < symbols.size(); j++) {
            if (s[i] != symbols[j]) {
                not_symbol = true;
            }
            else {
                not_symbol = false;
                break;
            }
        }
        if (not_symbol) len_word++;
        else {
            if (max_len_word < len_word) {
                max_len_word = len_word;
            }
            len_word = 0;
        }
    }
    // Вывод максимального длины слова в строке
    cout << max_len_word;
}