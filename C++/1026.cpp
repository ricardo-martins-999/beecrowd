#include <iostream>

using namespace std;

int main() {
    unsigned int A, B;
    
    while (cin >> A >> B)
        cout << (A^B) << '\n';

    return 0;
}