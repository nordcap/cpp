
/*
 *
 * По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.

Формат входных данных
Вводится натуральное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

50
Sample Output:

1 4 9 16 25 36 49
 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int N;
    cin >> N;
    int i = 1;
    while (i * i <= N) {
        cout << i * i << " ";
        i++;
    }

    return 0;
}


