#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    
    string entrada;
    while (cin >> entrada) {
        unsigned long long soma = 0;
        for (int i = entrada.size() - 1, j = 0; i >= 0; --i, j++)
            soma += (entrada[i] - 'A' + 1) * (unsigned long long) pow(26, j);

        if (soma <= 16384)
            cout << soma << '\n';
        else
            cout << "Essa coluna nao existe Tobias!\n";
    }
    return 0;
}