#include <iostream>
#include <iomanip>
 
using namespace std;

int main() {
    double value1 = 0.0, value2 = 0.0, value3 = 0.0;
    double area = 0.0, perimetro = 0.0;

    cin >> value1 >> value2 >> value3;

    if (value1 < value2+value3 && value2 < value1+value3 && value3 < value1+value2) {
        perimetro = value1 + value2 + value3;
        cout << fixed << setprecision(1) << "Perimetro = " << perimetro << '\n';
    } 
    else {
        area = (value1 + value2) * value3 / 2;
        cout << fixed << setprecision(1) << "Area = " << area << '\n';
    }

    return 0;
}