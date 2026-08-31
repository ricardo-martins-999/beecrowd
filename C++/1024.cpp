#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

void reverse(char word[], int size) {
    char auxiliary;
    for (int i = 0; i < size / 2; i++) {
        auxiliary = word[i];
        word[i] = word[size-i-1];
        word[size-i-1] = auxiliary;
    }
}

int main(){
    int n, i, j, size;
    char row[1001];
    
    cin >> n;
    cin.getline(row, 0);
    
    for(i = 0; i < n; i++) {
        cin.getline(row, 1001);
        
        for(j = 0; row[j] != '\0'; j++)
            if(row[j] >= 65 && row[j] <= 90 ||  row[j] >= 97 && row[j] <= 122) 
                row[j] += 3;
        
        size = strlen(row);
        reverse(row, size);
        
        for(j = size/2; row[j] != '\0'; j++) 
            row[j]--;
        
        printf("%s\n", row);              
    }

    return 0;
}