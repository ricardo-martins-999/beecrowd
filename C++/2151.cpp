#include <bits/stdc++.h>

using namespace std;

int my_max(int a, int b) {
    return (a >= b) ? a : b;
}

int main() {
    int numberOfTests, rows, columns, x, y, count = 1;

    cin >> numberOfTests;

    while (numberOfTests--) {
        cout << "Parede " << count++ << ":\n";
        cin >> rows >> columns >> x >> y;
        x--, y--;

        vector<vector<int>> matrix(rows, vector<int>(columns, 0));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cin >> matrix[i][j];
                
                int diff = my_max(abs(x - i), abs(y - j));
                if (diff >= 10) 
                    matrix[i][j] += 1;
                else 
                    matrix[i][j] += 10 - diff;
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (j == 0) cout << matrix[i][j];
                else cout << " " << matrix[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}