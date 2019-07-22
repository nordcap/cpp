#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
    /*
    Шахматный король ходит по горизонтали, вертикали и диагонали, но только на 1 клетку. Даны две различные клетки шахматной доски, определите, может ли король попасть с первой клетки на вторую одним ходом.

Формат входных данных
Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
Формат выходных данных
Программа должна вывести YES, если из первой клетки ходом короля можно попасть во вторую или NO в противном случае.
Sample Input:

4
4
5
5
Sample Output:
jjj
YES
    
     */

    int row1, col1, row2, col2;
    cin >> col1 >> row1 >> col2 >> row2;

    int diff_row1 = row2 - row1;
    int diff_row2 = row1 - row2;

    int diff_col1 = col2 - col1;
    int diff_col2 = col1 - col2;

    if ((diff_row1 == 1 || diff_row2 == 1 || diff_row1 == 0 || diff_row2 == 0) &&
        (diff_col1 == 1 || diff_col2 == 1 || diff_col1 == 0 || diff_col2 == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
