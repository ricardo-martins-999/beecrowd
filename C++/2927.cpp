#include <iostream>

using namespace std;

int main() {
    int students, computers;
    int burnedComputers, computersWithoutCompiler;

    cin >> students >> computers >> burnedComputers >> computersWithoutCompiler;

    int functionalComputers = computers - burnedComputers - computersWithoutCompiler;

    if (functionalComputers > students)
        cout << "Igor feliz!\n";
    else {
        if (burnedComputers > computersWithoutCompiler / 2) 
            cout << "Caio, a culpa eh sua!\n";
        else
            cout << "Igor bolado!\n";
    }

    return 0;
}