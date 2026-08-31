#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> array;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        array.push_back(v);
    }

    sort(array.begin(), array.end());
    
    if (n % 2 != 0)
        cout << array[n / 2] << '\n';
    else {
        int m = (array[(n / 2) - 1] + array[n / 2]) / 2.0;
        cout << m << '\n';
    }

    return 0;
}
