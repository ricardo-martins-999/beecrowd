#include <iostream>

using namespace std;

int main() {
    double valueA, valueB, valueC, valueD, sub;

    cin >> valueA;
    cin >> valueB;
    cin >> valueC;
    cin >> valueD;

    sub = (valueA * valueB) - (valueC * valueD);

    cout << "DIFERENCA = " << sub << '\n';

    return 0;
}
