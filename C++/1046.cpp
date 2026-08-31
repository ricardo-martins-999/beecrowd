#include <iostream>

using namespace std;

int main() {
    int startHour, endHour, duration = 0;

    cin >> startHour >> endHour;

    if (startHour < endHour && endHour <= 23)
        duration = endHour - startHour;
    else if (startHour > endHour && endHour <= 23) {
        while (true) {
            startHour += 1;
            duration += 1;
            if (startHour == 24)
                startHour = 0;
            if (startHour == endHour)
                break;
        }
    } else
        duration = 24;

    cout << "O JOGO DUROU " << duration << " HORA(S)" << '\n';

    return 0;
}
