#include <iostream>

using namespace std;

void sortDescending(double *a, double *b, double *c) {
    double temp;
    if (*a < *b) { temp = *a; *a = *b; *b = temp; }
    if (*a < *c) { temp = *a; *a = *c; *c = temp; }
    if (*b < *c) { temp = *b; *b = *c; *c = temp; }
}

int main() {
    double sideA, sideB, sideC;

    cin >> sideA >> sideB >> sideC;

    sortDescending(&sideA, &sideB, &sideC);

    if (sideA >= sideB + sideC)
        cout << "NAO FORMA TRIANGULO\n";
    else {
        if (sideA * sideA == sideB * sideB + sideC * sideC)
            cout << "TRIANGULO RETANGULO\n";
        else if (sideA * sideA > sideB * sideB + sideC * sideC)
            cout << "TRIANGULO OBTUSANGULO\n";
        else if (sideA * sideA < sideB * sideB + sideC * sideC)
            cout << "TRIANGULO ACUTANGULO\n";

        if (sideA == sideB && sideA == sideC)
            cout << "TRIANGULO EQUILATERO\n";
        else if (sideA == sideB || sideA == sideC || sideB == sideC)
            cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}
