#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* 
Симметричное число


Дано четырехзначное число. Определите, является ли его десятичная запись симметричной. Если число симметричное, то выведите 1, иначе выведите любое другое целое число. Число может иметь меньше четырех знаков, тогда нужно считать, что его десятичная запись дополняется слева незначащими нулями.

Формат входных данных

Вводится единственное число.

Формат выходных данных

Выведите одно целое число - ответ на задачу.

Sample Input 1:

2002
Sample Output 1:

1
Sample Input 2:

2008
Sample Output 2:

37

    */

    int N;
    cin >> N;
    int left = N / 100;
    int right = N % 100;

    int d1 = right / 10;
    int d2 = right % 10;

    right = d2 * 10 + d1;

    cout << left - right + 1 << endl;

    return 0;
}
