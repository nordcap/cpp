/*
 * Даны вещественные числа a, b, c, d, e, f. Решите систему линейных уравнений




Формат входных данных

Вводятся шесть чисел - коэффициенты уравнений системы.
Формат выходных данных
Вывод программы зависит от вида решения этой системы.

Если система не имеет решений, то программа должна вывести единственное число 0.

Если система имеет бесконечно много решений, каждое из которых имеет вид y=kx+n, то программа должна вывести число 1, а затем значения k и n.

Если система имеет единственное решение (x0, y0), то программа должна вывести число 2, а затем значения x0 и y0.

Если система имеет бесконечно много решений вида x=x0, y — любое, то программа должна вывести число 3, а затем значение x0.

Если система имеет бесконечно много решений вида y=y0, x — любое, то программа должна вывести число 4, а затем значение y0.

Если любая пара чисел (x, y)  является решением, то программа должна вывести число 5.

Sample Input 1:

1
0
0
1
3
3
Sample Output 1:

2 3 3
Sample Input 2:

1
1
2
2
1
2
Sample Output 2:

1 -1 1
Sample Input 3:

0
2
0
4
1
2
Sample Output 3:

4 0.5
Sample Input 4:

2
3
4
6
1
2
Sample Output 4:

1 -0.666667 0.333333
Sample Input 5:

0
1
0
3
5
15
Sample Output 5:

4 5
Sample Input 6:

1
0
1
0
3
3
Sample Output 6:

3 3
 * */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    double a, b, c, d, e, f, n, k;
    cin >> a >> b >> c >> d >> e >> f;
/*
 * ax+by=e
 * cx+dy=f
 * */

//система не имеет решений
    double det = a * d - b * c;
    double detX = e * d - b * f;
    double detY = a * f - c * e;
    if (det != 0) {
        //Если система имеет единственное решение
        double x = detX / det;
        double y = detY / det;
        cout << 2 << " " << x << " " << y << endl;
    } else {
        if (detX == 0 && detY == 0) {
            if (a == 0 && b == 0 && c == 0 && d == 0) {
                if (e != 0 || f != 0) cout << 0 << endl; else cout << 5 << endl;
            } else {
                if (a == 0 && c == 0) {
                    if (b != 0) cout << 4 << " " << e / b << endl; else cout << 4 << " " << f / d << endl;
                } else {
                    if (b == 0 && d == 0) {
                        if (a != 0) cout << 3 << " " << e / a << endl; else cout << 3 << " " << f / c << endl;
                    } else {
                        if (b != 0) {
                            n = e / b;
                            k = -a / b;
                            cout << 1 << " " << k << " " << n << endl;
                        } else {
                            n = f / d;
                            k = -c / d;
                            cout << 1 << " " << k << " " << n << endl;
                        }
                    }
                }
            }

        } else cout << 0 << endl;
    }


    return 0;
}
































