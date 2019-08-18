/*
 *Дано число n, не превосходящее 10, и массив размером n × n. Проверьте, является ли этот массив симметричным относительно главной диагонали. Выведите слово “YES”, если массив симметричный, и слово “NO” в противном случае.

Sample Input:

3
0 1 2
1 2 3
2 3 4
Sample Output:

YES
 * */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    bool simmetria = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] == a[j][i]) continue;
            else {
                simmetria = false;
                break;
            }
        }

    }

    if (simmetria) cout << "YES"; else cout << "NO";
    return 0;
}
