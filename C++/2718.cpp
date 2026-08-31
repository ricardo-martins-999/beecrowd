#include <iostream>

using namespace std;

int main() {
    
    int qtdeTest;
    
    cin >> qtdeTest;
    
    for (int i = 0; i < qtdeTest; i++) {
        long long int value;
        
        cin >> value;
        
        int currentSequence = 0, maximumSequence = 0;
        
        while (value > 0) {
            if (value % 2 == 1) {
                currentSequence++;
            } else {
                if (currentSequence > maximumSequence) {
                    maximumSequence = currentSequence;
                } 
                currentSequence = 0;
            }
            value /= 2;
        }
        
        if (currentSequence > maximumSequence) {
            maximumSequence = currentSequence;
        } 
        
        cout << maximumSequence << '\n';
    }
    
    return 0;
}