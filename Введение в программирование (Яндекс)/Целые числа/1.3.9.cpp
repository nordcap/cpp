#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* 
    Покупка пирожков


Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.



Формат входных данных

Программа получает на вход три числа: A, B, N - целые, положительные, не превышают 10000.

Формат выходных данных

Программа должна вывести два числа через пробел: стоимость покупки в рублях и копейках.


Sample Input 1:

10
15
2
Sample Output 1:

20 30
Sample Input 2:

2
50
4
Sample Output 2:

10 0
    
    */

    int A, B, N; //рубли, копейки, кол-во пирожков
    cin >> A >> B >> N;

    int summaRub = A * N;
    int summaKop = B * N;
    int outRub = summaRub + (summaKop / 100);
    int outKop = summaKop % 100;

    cout << outRub << " " << outKop << endl;

    return 0;
}
