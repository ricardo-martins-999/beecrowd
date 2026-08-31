#include <iostream>

using namespace std;

int main() {
    int valueA, valueB, valueC;
    int auxiliary, big;

    cin >> valueA >> valueB >> valueC;

    auxiliary = (valueA + valueB + abs(valueA - valueB)) / 2;

    big = (auxiliary > valueC) ? auxiliary : valueC;

    cout << big << " eh o maior\n";

    return 0;
}