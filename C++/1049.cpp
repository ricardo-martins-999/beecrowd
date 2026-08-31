#include <iostream>
#include <string>

using namespace std;

int main() {
    string name1, name2, name3;
    cin >> name1 >> name2 >> name3;

    if (name1 == "vertebrado") {
        if (name2 == "ave") {
            if (name3 == "carnivoro")
                cout << "aguia\n";
            else if (name3 == "onivoro")
                cout << "pomba\n";
        } 
        else if (name2 == "mamifero") {
            if (name3 == "onivoro")
                cout << "homem\n";
            else if (name3 == "herbivoro")
                cout << "vaca\n";
        }
    } 
    else if (name1 == "invertebrado") {
        if (name2 == "inseto") {
            if (name3 == "hematofago")
                cout << "pulga\n";
            else if (name3 == "herbivoro")
                cout << "lagarta\n";
        }
        else if (name2 == "anelideo") {
            if (name3 == "hematofago")
                cout << "sanguessuga\n";
            else if (name3 == "onivoro")
                cout << "minhoca\n";
        }
    }

    return 0;
}
