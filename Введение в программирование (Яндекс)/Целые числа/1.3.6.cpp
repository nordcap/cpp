#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    /* 
    Сумма цифр трехзначного числа

Дано целое трехзначное число. Найдите сумму его цифр.

Формат входных данных

На вход дается число от 100 до 999.

Формат выходных данных

Выведите одно целое число - ответ на задачу.

Sample Input:

476
Sample Output:

17
     */

    int n;
    cin >> n;
    cout << (n / 100) + (n / 10) % 10 + (n % 10) << endl;

    return 0;
}
