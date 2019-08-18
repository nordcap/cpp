/*
 * Даны числа n и m. Заполните массив размером n × m в шахматном порядке: клетки одного цвета заполнены нулями, а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. В левом верхнем углу записано число 1.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

3 5
Sample Output:

   1   0   2   0   3
   0   4   0   5   0
   6   0   7   0   8
 * */
#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc, char const *argv[]) {
    int n, m;
    cin >> n >> m;

    int a[n][m]; //матрица
    int num = 1;

    //заполняем нулями
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            a[i][j] = 0;
        }
    }


    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j += 2) {
                a[i][j] = num;
                num++;
            }
        } else {
            for (int j = 1; j < m; j += 2) {
                a[i][j] = num;
                num++;
            }

        }

    }

    for (int l = 0; l < n; ++l) {
        for (int k = 0; k < m; ++k) {
            cout << setw(3) << a[l][k] << " ";

        }
        cout << endl;
    }


    return 0;
}

