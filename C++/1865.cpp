#include <iostream>

using namespace std;

int main() {
    int numberTest;

    cin >> numberTest;

    while (numberTest--) {
        string name;
        int strenght;

        cin >> name >> strenght;

        cout << (name == "Thor") ? "Y\n" : "N\n";
    }

    return 0;
}