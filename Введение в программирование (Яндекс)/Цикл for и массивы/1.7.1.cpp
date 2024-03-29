/*
 * ыведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
1 2 3 4 5
Sample Output:

1 3 5
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

    //output
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) cout << a[i] << " ";
    }
    return 0;
}
