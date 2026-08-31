#include <iostream>
#include <iomanip>

using namespace std;

#define PI 3.14159

int main() {
    double radius, volume;

    cin >> radius;

    volume = (4/3.0) * PI * (radius * radius * radius); // v = (4/3) * pi * r³

    cout << "VOLUME = " << fixed << setprecision(3) << volume << '\n';

    return 0;
}