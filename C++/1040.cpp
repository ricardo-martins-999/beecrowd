#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double grade1, grade2, grade3, grade4;
    cin >> grade1 >> grade2 >> grade3 >> grade4;

    double average = (2 * grade1 + 3 * grade2 + 4 * grade3 + grade4) / 10;

    bool passed = false, failed = false, inExam = false;
    double examGrade = 0, finalAverage = 0;

    if (average >= 7.0)
        passed = true;
    else if (average < 5.0)
        failed = true;
    else if (average >= 5.0 && average <= 6.9) {
        inExam = true;
        cin >> examGrade;
        finalAverage = (average + examGrade) / 2;
    }

    cout << fixed << setprecision(1);
    cout << "Media: " << average << endl;

    if (passed)
        cout << "Aluno aprovado." << endl;
    if (failed)
        cout << "Aluno reprovado." << endl;
    if (inExam) {
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << examGrade << endl;
        if (finalAverage >= 5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        cout << "Media final: " << finalAverage << endl;
    }

    return 0;
}
