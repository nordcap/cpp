#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* 
    
    Даны два целых числа. Программа должна вывести единицу, если первое число больше второго, двойку, если второе больше первого, или ноль, если они равны.

Формат входных данных
Вводятся два числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
2
Sample Output:

2
    */

    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << 1 << endl;
    if (a < b)
        cout << 2 << endl;
    if (a == b)
        cout << 0 << endl;
    return 0;
}
