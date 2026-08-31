#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int employeesNumber, qtdHoursWorked;
    double valueHourWorked, employeeSalary;

    cin >> employeesNumber;
    cin >> qtdHoursWorked;
    cin >> valueHourWorked;

    employeeSalary = qtdHoursWorked * valueHourWorked;

    cout << "NUMBER = " << employeesNumber << '\n'; 
    cout << "SALARY = U$ " << fixed << setprecision(2) << employeeSalary << '\n';

    return 0;
}
