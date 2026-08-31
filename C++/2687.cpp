#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int grid[MAXN][MAXN];
bool gridVisited[MAXN][MAXN];

void dfs(int x, int y, int size) {
    gridVisited[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int px = x + dx[i];
        int py = y + dy[i];

        if (px >= 0 && px < size && py >= 0 && py < size) {
            if (!gridVisited[px][py] && grid[px][py] == 0) {
                grid[px][py] = 7;
                dfs(px, py, size);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

    int numberTest, sizeGrid;

    cin >> numberTest;

    while (numberTest--) {
        int qtdNumber0 = 0;
        int qtdNumber1 = 0;

        cin >> sizeGrid;

        for (int i = 0; i < sizeGrid; i++) {
            for (int j = 0; j < sizeGrid; j++) {
                gridVisited[i][j] = false;
                cin >> grid[i][j];

                if (grid[i][j] == 1) qtdNumber1++;
            }
        }

        for (int i = 0; i < sizeGrid; i++) {
            for (int j = 0; j < sizeGrid; j++) {
                if ((i == 0 || i == (sizeGrid-1) || j == 0 || j == (sizeGrid-1)) && grid[i][j] == 0 && !gridVisited[i][j]) {
                    grid[i][j] = 1;
                    dfs(i, j, sizeGrid);
                }

                if (grid[i][j] == 0) qtdNumber0++;
            }
        }

        double answer = (qtdNumber0 + qtdNumber1) / 2.0;

        cout << fixed << setprecision(2) << answer << '\n';
    }

    return 0;
}