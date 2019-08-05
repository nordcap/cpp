/*
 *Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
1 5 2 4 3
Sample Output:

5 4
 * */
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    vector<int> a(n);
    //input
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    for (int i = 0; i < n; ++i) {
        if (i == 0) continue;
        if (a[i] > a[i - 1]) cout << a[i] << " ";
    }


    return 0;
}

