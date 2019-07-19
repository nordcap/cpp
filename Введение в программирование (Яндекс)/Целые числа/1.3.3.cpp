#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* 
    Последняя цифра

Дано натуральное число, выведите его последнюю цифру.

Формат входных данных

На вход дается натуральное число N, не превосходящее 10000.

Формат выходных данных

Выведите одно целое число - ответ на задачу.

Sample Input:

753
Sample Output:

3
     */
    int n;
    cin >> n;
    cout << n % 10 << endl;
    return 0;
}
