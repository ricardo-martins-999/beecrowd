#include <iostream>

using namespace std;

int main() {
    int day, dayEnd, hour, hourEnd, minute, minuteFinal, second, secondFinal;
    string value;

    cin >> value >> day;
    cin >> hour >> value >> minute >> value >> second;
    cin >> value >> dayEnd;
    cin >> hourEnd >> value >> minuteFinal >> value >> secondFinal;

    second = secondFinal - second;
    minute = minuteFinal - minute;
    hour = hourEnd - hour;
    day = dayEnd - day;
    
    if (second < 0) {
        second += 60;
        minute--;
    }
    
    if (minute < 0) {
        minute += 60;
        hour--;
    }
    
    if (hour < 0) {
        hour += 24;
        day--;
    }
    
    cout << day << " dia(s)\n";
    cout << hour << " hora(s)\n";
    cout << minute << " minuto(s)\n";
    cout << second << " segundo(s)\n";

    return 0;
} 