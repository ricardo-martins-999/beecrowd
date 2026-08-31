#include <bits/stdc++.h>

using namespace std;

void dfs(vector<int> graph[], vector<bool> &visited, int v) {
    visited[v] = true;

    for (auto neighbor: graph[v])
        if (!visited[neighbor])
            dfs(graph, visited, neighbor);

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, l, x, y, flag = 1;
    cin >> n >> l;

    vector<int> graph[n];
    vector<bool> visitado(n, false);

    for (int i = 0; i < l; i++) {
        cin >> x >> y;
        graph[x-1].push_back(y-1);
        graph[y-1].push_back(x-1);
    }

    dfs(graph, visitado, 0);

    for (int i = 0; i < n; i++)
        if (!visitado[i]) {
            flag = 0;
            break;
        }

    if (flag)
        cout << "COMPLETO\n";
    else
        cout << "INCOMPLETO\n";

    return 0;
}