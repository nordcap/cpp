/*
 * По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

3 5
Sample Output:

   1   2   4   7  10
   3   5   8  11  13
   6   9  12  14  15
 * */
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, m;
    cin >> n >> m;

    int a[n][m]; //матрица

    //заполняем нулями
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            a[i][j] = 0;
        }
    }


    int num = 1;
    for (int diag = 0; diag < n + m - 1; ++diag) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (a[i][j] == 0 && diag == i + j) {
                    a[i][j] = num;
                    num++;
                }
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

