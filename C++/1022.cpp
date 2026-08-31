#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int testCase, divider;
    int numerator1, denominator1, numerator2, denominator2;
    char operation;

    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++) {
        cin >> numerator1 >> denominator1 >> operation >> numerator2 >> denominator2;

        if (operation == '/') {
            numerator1 = numerator1 * denominator2;
            denominator1 = numerator2 * denominator1;

            divider = mdc(numerator1, denominator1);

            cout << numerator1 << '/' << denominator1 << " = ";
            cout << numerator1/divider << '/' << denominator1/divider << '\n';
        } else {
            int denominator = denominator1 * denominator2;
            int numerator;
            if (operation == '+') {
                numerator = numerator1 * (denominator / denominator1) + numerator2 * (denominator / denominator2);
            } else if (operation == '-') {
                numerator = numerator1 * (denominator / denominator1) - numerator2 * (denominator / denominator2);
            } else if (operation == '*') {
                numerator = numerator1 * numerator2;
            }
            
            divider = mdc(numerator, denominator);

            if (divider < 0)
                divider = (-1) * divider;

            cout << numerator << '/' << denominator << " = ";
            cout << numerator/divider << '/' << denominator/divider << '\n';   
        }
    }

    return 0;
}

int mdc(int a,int b) {
    if(b == 0) 
        return a;

    return mdc(b, a % b);
}