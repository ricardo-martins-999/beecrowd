#include <iostream>

using namespace std;

int main() {
    int value1, value2, value3, enesimoValue;

    cin >> value1 >> value2 >> value3 >> enesimoValue;

    int dif = value3 - value2;
    int valueN = value3;

    for (int i = 3; i < enesimoValue; i++)
        valueN += dif;

    cout << valueN << '\n';

    return 0;
}