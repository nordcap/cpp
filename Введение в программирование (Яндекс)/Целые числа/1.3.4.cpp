#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* 
    Первая цифра двузначного числа

Дано двузначное число. Выведите его первую цифру (число десятков)

Формат входных данных

На вход дается натуральное двузначное число N.

Формат выходных данных

Выведите одно целое число - ответ на задачу.

Sample Input:

42
Sample Output:

4
     */

    int n;
    cin >> n;
    cout << n / 10 << endl;

    return 0;
}
