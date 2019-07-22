
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* 
    Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число). Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.
Формат входных данных
Вводятся три числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
2
3
Sample Output:

3
     */

    int a, b, c, max;
    cin >> a >> b >> c;

    if (a >= b)
    {
        max = a;
        if (max >= c)
        {
            cout << max << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    else
    {
        max = b;
        if (max >= c)
        {
            cout << max << endl;
        }
        else
        {
            cout << c << endl;
        }
    }

    return 0;
}
