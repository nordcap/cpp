/*
 * Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

5
1 2 3 2 3
Sample Output 1:

2
Sample Input 2:

5
1 1 1 1 1
Sample Output 2:

10
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

    int count = 0;
    for (int j = 0; j < n; ++j) {
        for (int i = j + 1; i < n; ++i) {
            if (a[j] == a[i]) count++;
        }

    }

    cout << count << endl;
    return 0;
}
