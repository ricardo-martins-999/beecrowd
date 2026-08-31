#include <iostream>

using namespace std;

int main(){
    long int value = 0;

    cin >> value;

    cout << value << '\n';

    int bankNote100 = value / 100;
    value = value - (bankNote100 * 100);

    int bankNote50 = value / 50;
    value = value - (bankNote50 * 50);

    int bankNote20 = value / 20;
    value = value - (bankNote20 * 20);

    int bankNote10 = value / 10;
    value = value - (bankNote10 * 10);

    int bankNote5 = value / 5;
    value = value - (bankNote5 * 5);

    int bankNote2 = value / 2;
    value = value - (bankNote2 * 2);

    int bankNote1 = value;

    cout << bankNote100 << " nota(s) de R$ 100,00\n";
    cout << bankNote50 << " nota(s) de R$ 50,00\n";
    cout << bankNote20 << " nota(s) de R$ 20,00\n";
    cout << bankNote10 << " nota(s) de R$ 10,00\n";    
    cout << bankNote5 << " nota(s) de R$ 5,00\n";
    cout << bankNote2 << " nota(s) de R$ 2,00\n";
    cout << bankNote1 << " nota(s) de R$ 1,00\n";

    return 0;
}