/*
 * Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является, то есть выведите такое число N, что F(N) = A. Если А не является числом Фибоначчи, выведите число -1.

Формат входных данных
Вводится натуральное число A > 1.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

8
Sample Output:

6
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    unsigned long int A;
    cin >> A;

    unsigned long int F0 = 0;
    unsigned long int F1 = 1;
    unsigned long int Fn = 1;

    int i = 2;
    bool answer = false;
    while (Fn < A) {
        Fn = F0 + F1;
        if (Fn == A) {
            answer = true;
            break;
        }
        F0 = F1;
        F1 = Fn;
        i++;
    }
    if (answer) cout << i;
    else cout << -1;


    return 0;
}
