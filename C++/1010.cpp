#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numberPart1, numberPart2;
    double unitValuePart1, unitValuePart2, totalPayable;

    cin >> numberPart1 >> unitValuePart1;
    cin >> numberPart2 >> unitValuePart2;

    totalPayable = (numberPart1 * unitValuePart1) + (numberPart2 * unitValuePart2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << totalPayable << '\n';

    return 0;
}
