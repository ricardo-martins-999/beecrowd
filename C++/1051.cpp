#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salary, tribute = 0.00;

    cin >> salary;

    if (salary > 4500.00) {
        tribute += (salary - 4500.00) * 0.28;
        salary -= (salary - 4500.00);
    }
    if (salary > 3000.00) {
        tribute += (salary - 3000.00) * 0.18;
        salary -= (salary - 3000.00);
    }
    if (salary > 2000.00) {
        tribute += (salary - 2000.00) * 0.08;
        salary -= (salary - 2000.00);
    }
        
    if (tribute == 0.00) {
        cout << "Isento\n";
    }
    else {
        cout << fixed << setprecision(2) << "R$ " << tribute;
    }
    
    return 0;
}