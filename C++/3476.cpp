#include <bits/stdc++.h>

using namespace std;

int main() {
    int S, B, C;
    
    scanf("%d %d %d", &S, &B, &C);

    double tax = (1.0 / S) + (1.0 / B) + (1.0 / C);
    double time = 1.0 / tax;
    double days = time;

    printf("%.3lf\n", days);

    return 0;
}