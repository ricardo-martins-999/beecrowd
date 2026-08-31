#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    double m;
    int n;
    
    cin >> m;
    cin >> n;
    
    cout << fixed << setprecision(2) << m * n << '\n';
 
    return 0;
}