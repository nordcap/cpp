/*
 *Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
Формат входных данных

Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
Формат выходных данных
Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
Sample Input 1:

1 7
2 4
3 2
4 8
5 6
6 1
7 3
8 5
Sample Output 1:

NO
Sample Input 2:

1 8
2 7
3 6
4 5
5 4
6 3
7 2
8 1
Sample Output 2:

YES
 * */
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    int inp1, inp2;
    vector<int> v;
    vector<int> h;
//занесение в массивы данных по верт и гор
    for (int i = 0; i < 8; ++i) {
        cin >> inp1 >> inp2;
        v.push_back(inp1);
        h.push_back(inp2);
    }


    bool mat = false;

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (i == j) continue;

            int diff_row_plus = v[j] - v[i];
            int diff_row_minus = v[i] - v[j];

            int diff_col_plus = h[j] - h[i];
            int diff_col_minus = h[i] - h[j];

            if (diff_row_plus == diff_col_plus || diff_row_minus == diff_col_minus ||
                diff_row_plus == diff_col_minus || diff_row_minus == diff_col_plus ||
                v[i] == v[j] || h[i] == h[j]) {
                mat = true;
            }
        }
    }

    if (mat == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;//не бьют
    }


    return 0;
}

