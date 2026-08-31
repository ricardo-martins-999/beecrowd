#include <bits/stdc++.h>

using namespace std;

void merge(int *array, int start, int middle, int end);
void merge_sort(int *array, int start, int end);
int busca(int *array, int size, int target);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    int numberMarbles, qtdQueries, values, cases = 1;

    while (1) {
        cin >> numberMarbles >> qtdQueries;

        if (!numberMarbles && !qtdQueries) break;

        cout << "CASE# " << cases++ << ":\n";
        
        int array_marmores[numberMarbles];

        for (int i = 0; i < numberMarbles; i++)
            cin >> array_marmores[i];

        merge_sort(array_marmores, 0, numberMarbles - 1);

        for (int i = 0; i < qtdQueries; i++) {
            cin >> values;

            int posicao = busca(array_marmores, numberMarbles, values);

            if (posicao >= 0) {
                cout << values << " found at " << posicao << '\n';
            } else {
                cout << values << " not found\n";
            }
        }
    }

    return 0;
}

void merge(int *array, int start, int middle, int end) {
    int sizeLeft = middle - start + 1;
    int sizeRight = end - middle;

    int arrayLeft[sizeLeft];
    int arrayRight[sizeRight];

    int i, j, k;

    for (i = 0; i < sizeLeft; i++)
        arrayLeft[i] = array[start + i];

    for (j = 0; j < sizeRight; j++)
        arrayRight[j] = array[middle + 1 + j];

    i = j = 0;
    k = start;

    while (i < sizeLeft && j < sizeRight) {
        if (arrayLeft[i] <= arrayRight[j]) {
            array[k] = arrayLeft[i++];
        } else {
            array[k] = arrayRight[j++];
        }
        k++;
    }

    while (i < sizeLeft) {
        array[k++] = arrayLeft[i++];
    }

    while (j < sizeRight) {
        array[k++] = arrayRight[j++];
    }
}

void merge_sort(int *array, int start, int end) {
    if (start < end) {
        int middle = start + (end - start) / 2;

        merge_sort(array, start, middle);
        merge_sort(array, middle + 1, end);

        merge(array, start, middle, end);
    }
}

int busca(int *array, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (target == array[i]) 
            return i + 1;
    }

    return -1;
}