/*
 * Дана последовательность натуральных чисел x1, x2, ..., xn. Стандартным отклонением называется величина




где


- среднее значение последовательности.
Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.

Формат входных данных

Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания). В последовательности не менее двух чисел до 0.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
7
9
0
Sample Output:

4.16333199893
 * */
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
    int x;
    double sumQuardo = 0;
    double sum = 0;
    int n = 0;
    while (true) {
        cin >> x;
        if (x == 0) break;
        else {
            sum = sum + x;
            sumQuardo = sumQuardo + x * x;
            ++n;
        }

    }

    double sigma = sqrt((sumQuardo - (double) (sum * sum) / n) / (n - 1));


    cout << setprecision(6) << fixed;
    cout << sigma << endl;

    return 0;
}
