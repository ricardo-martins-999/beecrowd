#include <iostream>
#include <iomanip>

using namespace std;

#define WEIGHT_A 3.5
#define WEIGHT_B 7.5

int main() {
    double scoredA, scoredB, avgAB;

    cin >> scoredA;
    cin >> scoredB;

    avgAB = ((scoredA * WEIGHT_A) + (scoredB * WEIGHT_B)) / (WEIGHT_A + WEIGHT_B);

    cout << "MEDIA = " << fixed << setprecision(5) << avgAB << '\n';

    return 0;
}
