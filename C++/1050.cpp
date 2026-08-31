#include <iostream>
 
using namespace std;

int main() { 
    int ddd = 0;
    
    cin >> ddd;
    
    if (ddd == 11) {
        cout << "Sao Paulo\n";
    } else if (ddd == 19) {
        cout << "Campinas\n";
    } else if (ddd == 21) {
        cout << "Rio de Janeiro\n";
    } else if (ddd == 27) {
        cout << "Vitoria\n";
    } else if (ddd == 31) {
        cout << "Belo Horizonte\n";
    } else if (ddd == 32) {
        cout << "Juiz de Fora\n";
    } else if (ddd == 61) {
        cout << "Brasilia\n";
    } else if (ddd == 71) {
        cout << "Salvador\n";
    } else {
        cout << "DDD nao cadastrado\n";
    }
 
    return 0;
}