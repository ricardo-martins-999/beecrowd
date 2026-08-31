#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

typedef struct {
    double x;
    double y;
} Point;

int main() {
    Point pointA, pointB;
    double distance;

    cin >> pointA.x >> pointA.y;
    cin >> pointB.x >> pointB.y;

    distance = sqrt(pow((pointB.x - pointA.x), 2) + pow((pointB.y - pointA.y), 2));

    cout << fixed << setprecision(4) << distance << '\n';

    return 0;
}