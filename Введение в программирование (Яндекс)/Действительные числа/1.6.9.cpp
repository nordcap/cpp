/*
 * Даны действительные коэффициенты a, b, c, при этом a ≠ 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.

Формат входных данных

Вводятся три действительных числа.
Формат выходных данных
Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
Sample Input:

1
-1
-2
Sample Output:

-1 2
 * */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
    double a, b, c, x1, x2;
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        if (x1 <= x2) {
            cout << x1 << " " << x2 << endl;
        } else
            cout << x2 << " " << x1 << endl;

    } else if (D == 0) {
        x1 = x2 = -b / (2 * a);
        cout << x1 << endl;
    } else if (D < 0) { return 0; }


    return 0;
}
