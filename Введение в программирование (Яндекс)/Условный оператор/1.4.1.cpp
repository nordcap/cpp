#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* 
    Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.

Формат входных данных
Вводятся два числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

1
2
Sample Output 1:

2
Sample Input 2:

5
3
Sample Output 2:

5
    */

    int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }

    return 0;
}
