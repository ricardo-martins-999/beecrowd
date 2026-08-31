#include <iostream>
#include <math.h>

using namespace std;

double distanceBetweenTwoPoints(int, int, int, int);
double area(int);

int main(void){
    int radiusHunter, xHunter, yHunter;
    int radiusFlower, xFlower, yFlower;
    
    while (cin >> radiusHunter >> xHunter >> yHunter >> radiusFlower >> xFlower >> yFlower) {
        if (radiusHunter >= distanceBetweenTwoPoints(xHunter, yHunter, xFlower, yFlower) + radiusFlower && (area(radiusHunter)) >= area(radiusFlower))
            printf("RICO\n");
        else
            printf("MORTO\n");
    }
    
    return 0;
}

double distanceBetweenTwoPoints(int xa, int ya, int xb, int yb) {
    return sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
}

double area(int radius) {
    return 3.14 * radius * radius;
}