#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name;
    double fixedSalary, totalSalesMade, finalSalary;

    cin >> name;
    cin >> fixedSalary;
    cin >> totalSalesMade;

    finalSalary = fixedSalary + (0.15 * totalSalesMade);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << finalSalary << '\n';

    return 0;
}
