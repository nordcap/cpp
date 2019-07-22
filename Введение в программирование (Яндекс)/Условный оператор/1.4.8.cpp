/**
 * Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите, может ли слон попасть с первой клетки на вторую одним ходом.

Формат входных данных
Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
Формат выходных данных
Программа должна вывести YES, если из первой клетки ходом слона можно попасть во вторую или NO в противном случае.
Sample Input:

4
4
5
5
Sample Output:

YES
 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int row1, col1, row2, col2;
    cin >> col1 >> row1 >> col2 >> row2;

    int diff_row_plus = row2 - row1;
    int diff_row_minus = row1 - row2;

    int diff_col_plus = col2 - col1;
    int diff_col_minus = col1 - col2;


    if (diff_row_plus == diff_col_plus || diff_row_minus == diff_col_minus ||
        diff_row_plus == diff_col_minus || diff_row_minus == diff_col_plus
            ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
