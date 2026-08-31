#include <bits/stdc++.h>

using namespace std;

#define MAXSIZE 100100

int fibonnaci[MAXSIZE];
int fibonot[MAXSIZE];

void fib() {
    fibonnaci[0] = 0;
    fibonnaci[1] = 1;

    for (int i = 2; i < MAXSIZE; i++) {
        fibonnaci[i] = fibonnaci[i - 1] + fibonnaci[i - 2];
    }

    int k = 1;
    int j = 2;

    for (int i = 1; i <= MAXSIZE; i++) {
        if (fibonnaci[j] != i) {
            fibonot[k] = i;
            k++;
        } else {
            j++;
        }
    }
}

int main() {
    fib();
    int n;
    cin >> n;
    cout << fibonot[n] << endl;
    return 0;
}