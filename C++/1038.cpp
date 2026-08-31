#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int code, amount;
    double value = 0.00;

    cin >> code >> amount;

    switch (code) {
        case 1:
            value = amount * 4.00;
            break;
        case 2:
            value = amount * 4.50;
            break;
        case 3:
            value = amount * 5.00;
            break;
        case 4:
            value = amount * 2.00;
            break;

        default:
            value = amount * 1.50;
            break;
    }

    cout << fixed << setprecision(2) << "Total: R$ " << value << '\n';       

    return 0;
}