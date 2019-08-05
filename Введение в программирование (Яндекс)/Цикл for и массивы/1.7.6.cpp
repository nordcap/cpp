/*
 * Выведите значение наименьшего из всех положительных элементов в массиве. Известно, что в массиве есть хотя бы один положительный элемент.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
5 -4 3 -2 1
Sample Output:

1
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

    //находим  индекс наименьшего положительного числа
    int num_min = 0;
    for (int i = 0; i < n; ++i) {
        if (a[num_min] <= 0) num_min = i;
        if (a[i] < a[num_min] && a[i] > 0) num_min = i;
    }
    cout << a[num_min] << endl;

    return 0;
}

