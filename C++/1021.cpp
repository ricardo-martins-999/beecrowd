#include <iostream>

using namespace std;

int main() {
    double valueInReais, valueInCents;

    scanf("%lf", &valueInReais);

    valueInCents = valueInReais * 100;

    // Notas
    int notes100 = valueInCents / 10000;
    valueInCents = valueInCents - (notes100 * 10000);

    int notes50 = valueInCents / 5000;
    valueInCents = valueInCents - (notes50 * 5000);

    int notes20 = valueInCents / 2000;
    valueInCents = valueInCents - (notes20 * 2000);

    int notes10 = valueInCents / 1000;
    valueInCents = valueInCents - (notes10 * 1000);

    int notes5 = valueInCents / 500;
    valueInCents = valueInCents - (notes5 * 500);

    int notes2 = valueInCents / 200;
    valueInCents = valueInCents - (notes2 * 200);

    // Moedas
    int coins01 = valueInCents / 100;
    valueInCents = valueInCents - (coins01 * 100);

    int coins50 = valueInCents / 50;
    valueInCents = valueInCents - (coins50 * 50);

    int coins25 = valueInCents / 25;
    valueInCents = valueInCents - (coins25 * 25);

    int coins10 = valueInCents / 10;
    valueInCents = valueInCents - (coins10 * 10);

    int coins5 = valueInCents / 5;
    valueInCents = valueInCents - (coins5 * 5);

    int coins1 = valueInCents / 1;

    cout << "NOTAS:\n";
    cout << notes100 << " nota(s) de R$ 100.00\n";
    cout << notes50 << " nota(s) de R$ 50.00\n"; 
    cout << notes20 << " nota(s) de R$ 20.00\n"; 
    cout << notes10 << " nota(s) de R$ 10.00\n";
    cout << notes5 << " nota(s) de R$ 5.00\n"; 
    cout << notes2 <<" nota(s) de R$ 2.00\n"; 

    cout << "MOEDAS:\n";
    cout << coins01 << " moeda(s) de R$ 1.00\n";
    cout << coins50 << " moeda(s) de R$ 0.50\n";
    cout << coins25 << " moeda(s) de R$ 0.25\n"; 
    cout << coins10 << " moeda(s) de R$ 0.10\n";
    cout << coins5 << " moeda(s) de R$ 0.05\n";
    cout << coins1 << " moeda(s) de R$ 0.01\n";

    return 0;
}