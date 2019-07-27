/*
 * По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

50
Sample Output:

1 2 4 8 16 32

 */
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    int N;
    cin >> N;

    int n = 0;
    int sum = pow(2, n);
    while (sum <= N) {
        cout << sum << " ";
        n++;
        sum = pow(2, n);

    }

    return 0;
}

