#include <iostream>
#include <iomanip>

using namespace std;

#define PI 3.14159

int main() {
    double radius, area;

    cin >> radius;

    area = PI * (radius * radius);

    cout << "A=" << fixed << setprecision(4) << area << '\n';

    return 0;
}
