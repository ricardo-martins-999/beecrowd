#include <iostream>

using namespace std;

int main() {
    long int eventDuration;

    cin >> eventDuration;
    
    long int hours = eventDuration / 3600;
    eventDuration = eventDuration - (hours * 3600);

    long int minutes = eventDuration / 60;
    eventDuration = eventDuration - (minutes * 60);

    long int seconds = eventDuration;

    cout << hours << ':' << minutes << ':' << seconds << '\n';

    return 0;
}