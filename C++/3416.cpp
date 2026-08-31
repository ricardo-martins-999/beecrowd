#include <stdio.h>

int main() {
    int N, L, D;
    scanf("%d %d %d", &N, &L, &D);

    int t = N * D;

    int r = (t + L * 1000 - 1) / (L * 1000);

    printf("%d\n", r * L);

    return 0;
}
