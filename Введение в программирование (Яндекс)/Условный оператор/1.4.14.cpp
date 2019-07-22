/*
 * Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.

Формат входных данных
Программа получает на вход числа A1, B1, C1, A2, B2, C2.
Формат выходных данных
Программа должна вывести одну из следующих строчек:
Boxes are equal, если коробки одинаковые,
The first box is smaller than the second one, если первая коробка может быть положена во вторую,
The first box is larger than the second one, если вторая коробка может быть положена в первую,
Boxes are incomparable, во всех остальных случаях.
Sample Input 1:

1
2
3
3
2
1
Sample Output 1:

Boxes are equal
Sample Input 2:

2
2
3
3
2
1
Sample Output 2:

The first box is larger than the second one
 * */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int A1, A2, B1, B2, C1, C2;
    int x1, y1, z1, x2, y2, z2;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
//упорядочивание 1ой коробки по возрастанию (ставим широкой стороной вниз)
    if (A1 <= B1 && B1 <= C1) {
        x1 = A1;
        y1 = B1;
        z1 = C1;
    }
    if (C1 <= A1 && A1 <= B1) {
        x1 = C1;
        y1 = A1;
        z1 = B1;
    }
    if (B1 <= A1 && A1 <= C1) {
        x1 = B1;
        y1 = A1;
        z1 = C1;
    }
    if (B1 <= C1 && C1 <= A1) {
        x1 = B1;
        y1 = C1;
        z1 = A1;
    }
    if (C1 <= B1 && B1 <= A1) {
        x1 = C1;
        y1 = B1;
        z1 = A1;
    }
    if (A1 <= C1 && C1 <= B1) {
        x1 = A1;
        y1 = C1;
        z1 = B1;
    }

    //упорядочивание 2ой коробки по возрастанию (ставим широкой стороной вниз)


    if (A2 <= B2 && B2 <= C2) {
        x2 = A2;
        y2 = B2;
        z2 = C2;
    }
    if (C2 <= A2 && A2 <= B2) {
        x2 = C2;
        y2 = A2;
        z2 = B2;
    }
    if (B2 <= A2 && A2 <= C2) {
        x2 = B2;
        y2 = A2;
        z2 = C2;
    }
    if (B2 <= C2 && C2 <= A2) {
        x2 = B2;
        y2 = C2;
        z2 = A2;
    }
    if (C2 <= B2 && B2 <= A2) {
        x2 = C2;
        y2 = B2;
        z2 = A2;
    }
    if (A2 <= C2 && C2 <= B2) {
        x2 = A2;
        y2 = C2;
        z2 = B2;
    }
    //сравниваем основания двух коробок
    if (x1 == x2 && y1 == y2 && z1 == z2) {
        cout << "Boxes are equal" << endl;
    } else if (x1 <= x2 && y1 <= y2 && z1 <= z2) {
        cout << "The first box is smaller than the second one" << endl;
    } else if (x2 <= x1 && y2 <= y1 && z2 <= z1) {
        cout << "The first box is larger than the second one" << endl;
    } else {
        cout << "Boxes are incomparable" << endl;
    }


    return 0;
}

