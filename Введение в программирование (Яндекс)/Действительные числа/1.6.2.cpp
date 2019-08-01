/*
 * Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.
Формат входных данных
Вводится положительное действительное число.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1.79
Sample Output:

7
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    double x;
    cin >> x;

    cout << trunc(10 * (x - trunc(x)));

    return 0;
}

