#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* 
    Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами. Если треугольник существует, выведите строку YES, иначе выведите строку NO.
Треугольник — это три точки, не лежащие на одной прямой.
Формат входных данных
Вводятся три числа.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

3
4
5
Sample Output:

YES
    */
    int A, B, C;
    cin >> A >> B >> C;

    if (A + B > C && A + C > B && B + C > A)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
