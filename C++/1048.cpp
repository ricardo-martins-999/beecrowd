#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double salary;
    cin >> salary;

    double adjustment = 0.0;
    int percentage = 0;

    if (salary > 0.00 && salary <= 400.00) {
        percentage = 15;
        adjustment = salary * 0.15;
    }
    else if (salary >= 400.01 && salary <= 800.00) {
        percentage = 12;
        adjustment = salary * 0.12;
    } 
    else if (salary >= 800.01 && salary <= 1200.00) {
        percentage = 10;
        adjustment = salary * 0.10;
    } 
    else if (salary >= 1200.01 && salary <= 2000.00) {
        percentage = 7;
        adjustment = salary * 0.07;
    } 
    else if (salary > 2000.00) {
        percentage = 4;
        adjustment = salary * 0.04;
    }

    cout << fixed << setprecision(2);
    cout << "Novo Salario: " << salary + adjustment << '\n';
    cout << "Reajuste ganho: " << adjustment << '\n';
    cout << "Em percentual: " << percentage << " %\n";
    return 0;
}
