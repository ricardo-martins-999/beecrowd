#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        unsigned int hour, minute;

        if (!(cin >> hour >> minute)) {
            break;
        }

        cout << setw(2) << setfill('0') << hour/30U << ":" << setw(2) << setfill('0') << minute/6U << "\n";
    }
}