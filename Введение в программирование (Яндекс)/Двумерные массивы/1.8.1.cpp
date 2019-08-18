/*
 * Найдите индексы первого вхождения максимального элемента.

Формат входных данных
Программа получает на вход размеры массива n и m, затем n строк по m чисел в каждой. n и m не превышают 100.

Формат выходных данных
Выведите два числа: номер строки и номер столбца, в которых стоит наибольший элемент в двумерном массиве. Если таких элементов несколько, то выводится тот, у которого меньше номер строки, а если номера строк равны то тот, у которого меньше номер столбца.

Sample Input:

3 4
0 3 2 4
2 3 5 5
5 1 2 3
Sample Output:

1 2
 * */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, m;
    cin >> n >> m;
    int a[100][100];


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }

    }

    int max = -2147483648;
    int col = 0;
    int row = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] > max) {
                max = a[i][j];
                col = j;
                row = i;
            } else if (a[i][j] == max) {
                if (i < row) {
                    max = a[i][j];
                    col = j;
                    row = i;
                } else if (i == row) {
                    if (j < col) {
                        max = a[i][j];
                        col = j;
                        row = i;
                    }
                }
            }
        }


    }

    cout << row << " " << col;


    return 0;
}

