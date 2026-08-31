#include <bits/stdc++.h>

using namespace std;

int number[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
string number_str[] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};


void print_string(string value) {
    if (value == "0")
        printf("zero\n");
    else if (value == "1")
        printf("um\n");
    else if (value == "2")
        printf("dois\n");
    else if (value == "3")
        printf("tres\n");
    else if (value == "4")
        printf("quatro\n");
    else if (value == "5")
        printf("cinco\n");
    else if (value == "6")
        printf("seis\n");
    else if (value == "7")
        printf("sete\n");
    else if (value == "8")
        printf("oito\n");
    else if (value == "9")
        printf("nove\n");
}

void print_number(string value) {
    if (value == "zero")
        printf("0\n");
    else if (value == "um")
        printf("1\n");
    else if (value == "dois")
        printf("2\n");
    else if (value == "tres")
        printf("3\n");
    else if (value == "quatro")
        printf("4\n");
    else if (value == "cinco")
        printf("5\n");
    else if (value == "seis")
        printf("6\n");
    else if (value == "sete")
        printf("7\n");
    else if (value == "oito")
        printf("8\n");
    else if (value == "nove")
        printf("9\n");
}

int main() {
    string input;

    cin >> input;

    print_string(input);
    print_number(input);

    return 0;
}