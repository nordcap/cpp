/*
 * Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.

Формат входных данных
Вводится натуральное число.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

1
Sample Output 1:

YES
Sample Input 2:

2
Sample Output 2:

YES
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    int N;
    cin >> N;

    int n = 0;

    while (1) {
        if (pow(2, n) == N) {
            cout << "YES" << endl;
            break;
        };
        if (pow(2, n) > N) {
            cout << "NO" << endl;
            break;
        }
        n++;

    }
    return 0;
}
