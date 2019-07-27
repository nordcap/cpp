/*
 * Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

По данному числу N определите N-е число Фибоначчи F(N).

Формат входных данных
Вводится натуральное число N.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

6
Sample Output:

8
 * */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int N, Fn;
    cin >> N;

    int F0 = 0;
    int F1 = 1;

    if (N == 1) {
        cout << F1;
    } else {
        int i = 2;
        while (i <= N) {
            Fn = F0 + F1;
            F0 = F1;
            F1 = Fn;
            i++;
        }

        cout << Fn;

    }

    return 0;
}


