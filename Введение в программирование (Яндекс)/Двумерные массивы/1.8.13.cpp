/*
 * По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

4 5
Sample Output:

   1   2   3   4   5
  14  15  16  17   6
  13  20  19  18   7
  12  11  10   9   8

  */
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, m;
    cin >> n >> m;

    int a[n][m]; //матрица
    vector<int> direction = {1, 2, 3, 4};


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            a[i][j] = 0;
        }
    }

    int num = 1;

    int i = 0;
    int j = 0;
    int dir = direction[0];//right
    while (num <= n * m) {
        a[i][j] = num;
        switch (dir) {
            case 1: {
                j++;//right
                break;
            }
            case 2: {
                i++;//down
                break;
            }
            case 3: {
                j--;//left
                break;
            }
            case 4: {
                i--;//top
                break;
            }
        }


        if (a[i][j] != 0 || i == n || j == m || j < 0 || i < 0) {

            switch (dir) {
                case 1: {
                    dir = direction[1];//down
                    i++;
                    j--;
                    break;
                }
                case 2: {
                    dir = direction[2];//left
                    j--;
                    i--;
                    break;
                }
                case 3: {
                    dir = direction[3];//top
                    j++;
                    i--;
                    break;
                }
                case 4: {
                    dir = direction[0];//right
                    i++;
                    j++;
                    break;
                }
            }
        }


        num++;

    }


    for (int l = 0; l < n; ++l) {
        for (int k = 0; k < m; ++k) {
            cout << setw(3)<< a[l][k] << " ";

        }
        cout << endl;
    }


    return 0;
}

