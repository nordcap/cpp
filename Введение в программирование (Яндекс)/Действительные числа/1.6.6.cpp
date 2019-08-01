/*
 * Определите среднее значение всех элементов последовательности, завершающейся числом 0.

Формат входных данных

Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
7
9
0
Sample Output:

5.66666666667
 * */
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
    int N;
    int sum = 0;
    int count = 0;
    while (true) {
        cin >> N;
        if (N == 0) break;
        else {
            sum = sum + N;
            ++count;
        }

    }

    cout << setprecision(6) << fixed;
    cout << (double) sum / count << endl;
    return 0;
}

