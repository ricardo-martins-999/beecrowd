#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    int quadrant = 0;
    if (x > 0 && y > 0)
        quadrant = 1;
    else if (x < 0 && y > 0)
        quadrant = 2;
    else if (x < 0 && y < 0)
        quadrant = 3;
    else if (x > 0 && y < 0)
        quadrant = 4;
    else if (x == 0 && y == 0)
        quadrant = 0;
    else if (x == 0 && y != 0)
        quadrant = -1;
    else if (x != 0 && y == 0)
        quadrant = -2;

    if (quadrant != 0 && quadrant > 0)
        cout << "Q" << quadrant << '\n';
    else if (quadrant == 0)
        cout << "Origem" << '\n';
    else if (quadrant == -1)
        cout << "Eixo Y" << '\n';
    else if (quadrant == -2)
        cout << "Eixo X" << '\n';

    return 0;
}
