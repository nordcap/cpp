/*
 * Даны длины сторон треугольника. Вычислите площадь треугольника.
Формат входных данных
Вводятся три положительных числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

3
4
5
Sample Output:

6
 * */

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << S << endl;

    return 0;
}
