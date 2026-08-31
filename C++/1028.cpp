#include <iostream>

using namespace std;

int mdc(int x, int y) {
    if (y == 0)
        return x;
    return mdc(y, x % y);
}

int main(void){
    int n, a, b, c;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        
        if (a > b)
            c = mdc(a, b);
        else
            c = mdc(b, a);
        
        cout << c << '\n';
    }

    return 0;
}