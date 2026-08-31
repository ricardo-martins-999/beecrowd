#include <iostream>
#include <iomanip>

using namespace std;

#define LITERS_PER_KM 12

int main() {
    int timeSpent, averageSpeed;
    int distance;
    double qtdLiters;

    cin >> timeSpent;
    cin >> averageSpeed;

    distance = timeSpent * averageSpeed;

    qtdLiters = (double) distance / LITERS_PER_KM;

    cout << fixed << setprecision(3) << qtdLiters << '\n';

    return 0;
}