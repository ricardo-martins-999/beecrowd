#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int totalDistanceTraveled;
    double totalFuelSpent, averageConsumption;

    cin >> totalDistanceTraveled;
    cin >> totalFuelSpent;

    averageConsumption = totalDistanceTraveled / totalFuelSpent;

    cout << fixed << setprecision(3) << averageConsumption << " km/l\n";
    
    return 0;
}