#include <iostream>

using namespace std;

int main() {
    int ageInDays;

    cin >> ageInDays;

    int years = ageInDays / 365;
    ageInDays = ageInDays - (years * 365);

    int months = ageInDays / 30;
    ageInDays = ageInDays - (months * 30);

    int days = ageInDays;

    cout << years << " ano(s)\n";
    cout << months << " mes(es)\n";
    cout << days << " dia(s)\n";

    return 0;
}