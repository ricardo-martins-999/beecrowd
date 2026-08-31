#include <iostream>
#include <iomanip>

using namespace std;

#define PI 3.14159

int main() {
    double valueA, valueB, valueC;
    double area_rectangle_triangle;
    double area_circle;
    double area_trapezium;
    double area_square;
    double area_rectangle;

    cin >> valueA >> valueB >> valueC;

    area_rectangle_triangle = (valueA * valueC) / 2.0;     // a = b * h / 2
    area_circle = PI * (valueC * valueC);                  // a = pi * r²
    area_trapezium = (valueA + valueB) * valueC / 2.0;     // a = (b + B) * h / 2
    area_square = valueB * valueB;                         // a = l²
    area_rectangle = valueA * valueB;                      // a = b * h

    cout << "TRIANGULO: " << area_rectangle_triangle << '\n';
    cout << "CIRCULO: " << area_circle << '\n';
    cout << "TRAPEZIO: " << area_trapezium << '\n';
    cout << "QUADRADO: " << area_square << '\n';
    cout << "RETANGULO: " << area_rectangle << '\n';

    return 0;
}