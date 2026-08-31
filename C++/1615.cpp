#include <iostream>
#include <vector>

using namespace std;

int main() {
    int qtdeTest;

    cin >> qtdeTest;

    while (qtdeTest--) {
        int candidates, inhabitants;
        cin >> candidates >> inhabitants;

        vector<int> votes(candidates, 0);

        for (int i = 0; i < inhabitants; i++) {
            int vote;
            cin >> vote;
            votes[vote - 1]++;
        }

        bool flag = false;
        for (int i = 0; i < candidates; i++) {
            if (votes[i] > inhabitants / 2) {
                cout << i + 1 << '\n';
                flag = true;
                break;
            }
        }

        if (!flag) cout << "-1\n";
    }

    return 0;
}
