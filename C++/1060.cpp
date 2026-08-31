#include <iostream>

using namespace std;
 
int main() {
    double value = 0.0;
    int i = 0, count = 0;
    
    for (i; i < 6; i++) {
        cin >> value;
        if (value > 0) {
            count++;
        }
    }
    
    cout << count << " valores positivos\n";
 
    return 0;
}