/**
 *Даны вещественные числа a, b, c, d, e, f. Известно, что система линейных уравнений




имеет ровно одно решение. Выведите два числа x и y, являющиеся решением этой системы.

Формат входных данных

Вводятся шесть чисел - коэффициенты уравнений системы.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
0
0
1
3
3
Sample Output:

3 3
 *
 * */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
/*
 * ax+by=e
 * cx+dy=f
 * */
    double x = (e * d - b * f) / (a * d - b * c);
    double y = (a * f - c * e) / (a * d - b * c);

    cout << x << " " << y << endl;
    return 0;
}

