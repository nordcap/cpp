/*
 *Дано положительное действительное число X. Выведите его дробную часть.

Формат входных данных

Вводятся положительное действительное число.

Формат выходных данных
Выведите ответ на задачу.
Sample Input:

17.9
Sample Output:

0.9
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
    double x;
    cin >> x;

    int y = trunc(x);
    //cout << setprecision(6) << fixed;
    cout << x - y << endl;


    return 0;
}

