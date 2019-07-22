/*Дано три числа. Упорядочите их в порядке неубывания.

Формат входных данных
Вводятся три числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
2
1
Sample Output:

1 1 2
 * */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int a, b, c;

    if (X <= Y && Y <= Z) {
        a = X;
        b = Y;
        c = Z;
    }
    if (Z <= X && X <= Y) {
        a = Z;
        b = X;
        c = Y;
    }
    if (Y <= X && X <= Z) {
        a = Y;
        b = X;
        c = Z;
    }
    if (Y <= Z && Z <= X) {
        a = Y;
        b = Z;
        c = X;
    }
    if (Z <= Y && Y <= X) {
        a = Z;
        b = Y;
        c = X;
    }
    if (X <= Z && Z <= Y) {
        a = X;
        b = Z;
        c = Y;
    }
    cout << a << ' ' << b << ' ' << c << endl;


    return 0;
}
