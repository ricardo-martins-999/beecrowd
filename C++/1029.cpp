#include <iostream>

using namespace std;

long long int arrayCall[40];

long long int fibonacci(int n){
    long long int a = 1, b = 1, c;
    int i = 2;
    if(n == 1)
        return a;
    else{
        if(n == 2)
            return b;
        else{
            while(i < n){
                c = a + b;
                a = b;
                b = c;
                i++;
            }
            return c;
        }
    }
}

void qtdCalls() {
    arrayCall[0] = arrayCall[1] = 0;
    for (int i = 2; i < 40; i++) 
        arrayCall[i] = arrayCall[i-1] + arrayCall[i-2] + 2;
}

int main() {
    int testCase;

    cin >> testCase;

    qtdCalls();

    while (testCase--) {
        int n;
        
        cin >> n;

        cout << "fib(" << n << ") = " << arrayCall[n] << " calls = " << fibonacci(n) << '\n';
    }

    return 0;
}