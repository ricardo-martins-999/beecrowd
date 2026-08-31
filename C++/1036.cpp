#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double valueA, valueB, valueC;
    double delta;
    double valueX1, valueX2;

    cin >> valueA >> valueB >> valueC;

    delta = (valueB * valueB) - 4 * valueA * valueC;

    if (delta < 0 || valueA == 0) {
        cout << "Impossivel calcular\n";
    } 
    else {
        valueX1 = (-valueB + sqrt(delta)) / (2 * valueA);
        valueX2 = (-valueB - sqrt(delta)) / (2 * valueA);

        cout << fixed << setprecision(5) << "R1 = " << valueX1 << '\n';
        cout << fixed << setprecision(5) << "R2 = " << valueX2 << '\n';
    }

    return 0;
}