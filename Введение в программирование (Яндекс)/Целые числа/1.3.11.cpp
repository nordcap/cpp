#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    /* 
    Разность времен

Даны значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды для каждого из моментов времени. Известно, что второй момент времени наступил не раньше первого. Определите, сколько секунд прошло между двумя моментами времени.

Формат входных данных

Программа на вход получает три целых числа: часы, минуты, секунды, задающие первый момент времени и три целых числа, задающих второй момент времени.

Формат выходных данных

Выведите число секунд между этими моментами времени.

Sample Input 1:

1
1
1
2
2
2
Sample Output 1:

3661
Sample Input 2:

1
2
30
1
3
20
Sample Output 2:

50
    */

    int hour1, hour2, min1, min2, sec1, sec2;

    cin >> hour1 >> min1 >> sec1;
    cin >> hour2 >> min2 >> sec2;
    //переводим время в секунды
    int time1 = hour1 * 3600 + min1 * 60 + sec1;
    int time2 = hour2 * 3600 + min2 * 60 + sec2;

    cout << time2 - time1 << endl;

    return 0;
}
