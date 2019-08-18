/*
 * Дан прямоугольный массив размером n×m. Поверните его на 90 градусов по часовой стрелке, записав результат в новый массив размером m×n.

Формат входных данных
Вводятся два числа n и m, не превосходящие 100, затем массив размером n×m.
Формат выходных данных
Выведите получившийся массив. Числа при выводе разделяйте одним пробелом.

Sample Input:

3 4
11 12 13 14
21 22 23 24
31 32 33 34
Sample Output:

31 21 11
32 22 12
33 23 13
34 24 14
 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, m;
    cin >> n >> m;


    int a[n][m], b[m][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            b[j][n - i - 1] = a[i][j];
        }
    }

    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            cout << b[j][i] << " ";
        }
        cout << endl;
    }


    return 0;
}

