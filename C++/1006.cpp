#include <iostream>
#include <iomanip>

using namespace std;

#define WEIGHT_A 2
#define WEIGHT_B 3
#define WEIGHT_C 5

int main() {
    double scoredA, scoredB, scoredC, avgABC;

    cin >> scoredA;
    cin >> scoredB;
    cin >> scoredC;

    avgABC = ((scoredA * WEIGHT_A) + (scoredB * WEIGHT_B) + (scoredC * WEIGHT_C)) / (WEIGHT_A + WEIGHT_B + WEIGHT_C);

    cout << "MEDIA = " << fixed << setprecision(1) << avgABC << '\n';

    return 0;
}
