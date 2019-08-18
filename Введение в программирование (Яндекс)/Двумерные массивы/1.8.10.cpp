/*
 * По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

4 5
Sample Output:

   1   2   3   4   5
  14  15  16  17   6
  13  20  19  18   7
  12  11  10   9   8

  */
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, m;
    cin >> n >> m;

    int a[n][m]; //матрица

    int num = 1;

    int i = 0;
    int j = 0;
    string right = "right";
    string left = "left";
    string dir = right;

    while (num <= n * m) {
        a[i][j] = num;
        if (dir == right) {
            //left
            j++;
        } else if (dir == left) {
            //right
            j--;
        }
        if (j == m) {
            i++;
            j--;
            if (dir == right) dir = left;
        }
        if (j < 0) {
            i++;
            j++;
            if (dir == left) dir = right;
        }
        num++;
    }

    for (int l = 0; l < n; ++l) {
        for (int k = 0; k < m; ++k) {
            cout << setw(3) << a[l][k] << " ";

        }
        cout << endl;
    }

    return 0;
}

