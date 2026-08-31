#include <iostream>

using namespace std;

int main() {
    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;

    if (number1 < number2 && number1 < number3) {
        cout << number1 << '\n';
        if (number2 < number3) {
            cout << number2 << '\n';
            cout << number3 << '\n';
        } 
        else {
            cout << number3 << '\n';
            cout << number2 << '\n';
        }
    } 
    else if (number2 < number1 && number2 < number3) {
        cout << number2 << '\n';
        if (number1 < number3) {
            cout << number1 << '\n';
            cout << number3 << '\n';
        } 
        else {
            cout << number3 << '\n';
            cout << number1 << '\n';
        }
    } 
    else if (number3 < number1 && number3 < number2) {
        cout << number3 << '\n';
        if (number1 < number2) {
            cout << number1 << '\n';
            cout << number2 << '\n';
        } 
        else {
            cout << number2 << '\n';
            cout << number1 << '\n';
        }
    }
    cout << '\n';
    cout << number1 << '\n';
    cout << number2 << '\n';
    cout << number3 << '\n';

    return 0;
}