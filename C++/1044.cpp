#include <iostream>

using namespace std;

int main() {
    int valueA, valueB;
    cin >> valueA >> valueB;

    int count = 1;
    if (valueA < valueB) {
        while (true) {
            if (valueA * count == valueB)
                break;
            if (count == valueB)
                break;
            count++;
        }

        if (valueA * count == valueB)
            cout << "Sao Multiplos\n";
        else
            cout << "Nao sao Multiplos\n";
    } 
    else {
        while (true) {
            if (valueB * count == valueA)
                break;
            if (count == valueA)
                break;
            count++;
        }

        if (valueB * count == valueA)
            cout << "Sao Multiplos\n";
        else
            cout << "Nao sao Multiplos\n";
    }

    return 0;
}
