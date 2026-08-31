#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int gold = 0;
    int silver = 0;
    int bronze = 0;
} Medals;

// Função de comparação para ordenar o vector de acordo com o número de medalhas
bool compareMedals(const pair<string, Medals>& a, const pair<string, Medals>& b) {
    // Comparar por ouro, prata e bronze
    if (a.second.gold != b.second.gold) {
        return a.second.gold > b.second.gold;
    } else if (a.second.silver != b.second.silver) {
        return a.second.silver > b.second.silver;
    } else if (a.second.bronze != b.second.bronze) {
        return a.second.bronze > b.second.bronze;
    } else {
        // Se todas as medalhas forem iguais, comparar pela chave (país)
        return a.first < b.first;
    }
}


int main() {
    map<string, Medals> leaderboard;
    string input, country;

    while (getline(cin, input)) {
        for (int i = 0; i < 3; i++) {
            getline(cin, country);

            if (i == 0)
                leaderboard[country].gold += 1;
            else if (i == 1)
                leaderboard[country].silver += 1;
            else
                leaderboard[country].bronze += 1;
        }
    }

    // Criar um vector com os pares chave-valor do map
    vector<pair<string, Medals>> vectorLeaderboard(leaderboard.begin(), leaderboard.end());

    // Ordenar o vector usando a função de comparação
    sort(vectorLeaderboard.begin(), vectorLeaderboard.end(), compareMedals);

    // Imprimir os resultados ordenados
    cout << "Quadro de Medalhas\n";
    for (const auto& element : vectorLeaderboard) {
        cout << element.first << " " << element.second.gold << " " << element.second.silver << " " << element.second.bronze << '\n';
    }

    return 0;
}