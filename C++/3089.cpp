#include <iostream>

using namespace std;

int main() {
    int qtdeGifts;

    while (1) {
        cin >> qtdeGifts;

        if (!qtdeGifts) break;

        int size = 2 * qtdeGifts;
        int gifts[size];

        for (int i = 0; i < size; i++)
            cin >> gifts[i];

        int maximumValue = 0;
        int minimumValue = 1e9;
        for (int i = 0, j = size - 1; i < j; i++, j--) {
            int sum = gifts[i] + gifts[j];

            if (maximumValue <= sum)
                maximumValue = sum;
            
            if (minimumValue >= sum)
                minimumValue = sum;
        }

        cout << maximumValue << ' ' << minimumValue << '\n';
    }

    return 0;
}