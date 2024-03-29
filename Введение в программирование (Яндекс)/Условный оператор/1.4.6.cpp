#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* 
    Шахматная ладья ходит по горизонтали или вертикали. Даны две различные клетки шахматной доски, определите, может ли ладья попасть с первой клетки на вторую одним ходом.

Формат входных данных
Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
Формат выходных данных
Программа должна вывести YES, если из первой клетки ходом ладьи можно попасть во вторую или NO в противном случае.
Sample Input:

4
4
5
5
Sample Output:

NO
     */

    int r1, c1, r2, c2;
    cin >> c1 >> r1 >> c2 >> r2;

    if (c2 == c1 || r1 == r2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
