/*
 * Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.

Формат входных данных
Вводится целое положительное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:

15
Sample Output:

3
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int N;
    cin >> N;

    int i = 2;
    while (i <= N) {
        if (N % i == 0) {
            cout << i;
            break;
        }
        i++;
    }


    return 0;
}
