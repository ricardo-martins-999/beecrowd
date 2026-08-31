#include <iostream>

using namespace std;

unsigned short recurrence(unsigned short qtdSoldiers, unsigned short qtdJumps);

int main () {
    unsigned short cases, qtdInstances;
    unsigned short qtdSoldiers, qtdJumps;

    cin >> cases;

    qtdInstances = 0;
    while (cases--) {
        cin >> qtdSoldiers >> qtdJumps;
        cout << "Case " << ++qtdInstances << ": " << recurrence(qtdSoldiers, qtdJumps) + 1 << '\n';
    }

    return 0;
}

unsigned short recurrence(unsigned short qtdSoldiers, unsigned short qtdJumps) {
    unsigned short i, r;
    r = 0;

    for (i = 2; i <= qtdSoldiers; i++)
        r = (r + qtdJumps) % i;

    return r;
}