#include <iostream>

using namespace std;

int main() {
    int startHour, startMinute, endHour, endMinute;
    int hour, minute;

    cin >> startHour >> startMinute >> endHour >> endMinute;

    if (endHour > startHour && endMinute > startMinute) {
        hour = endHour - startHour;
        minute = endMinute - startMinute;
        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
    } 
    else if (endHour > startHour && endMinute < startMinute) {
        hour = (endHour - startHour) - 1;
        minute = (endMinute - startMinute) + 60;
        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
    } 
    else if (endHour > startHour && endMinute == startMinute) {
        hour = endHour - startHour;
        minute = 0;
        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
    } 
    else if (endHour == startHour && endMinute < startMinute) {
        hour = 23;
        minute = (endMinute - startMinute) + 60;
        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
    } 
    else if (endHour == startHour && endMinute > startMinute) {
        hour = 0;
        minute = endMinute - startMinute;
        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
    } 
    else if (endHour == startHour && endMinute == startMinute) {
        hour = 24;
        minute = 0;
        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
    } 
    else if (endHour < startHour && endMinute > startMinute) {
        hour = (endHour - startHour) + 24;
        minute = endMinute - startMinute;
        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
    }
    else if (endHour < startHour && endMinute < startMinute) {
        hour = (endHour - startHour) + 23;
        minute = (endMinute - startMinute) + 60;
        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
    }
    else if (endHour < startHour && endMinute == startMinute) {
        hour = (endHour - startHour) + 24;
        minute = 0;
        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
    }

    return 0;
}