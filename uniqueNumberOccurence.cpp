#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[], int size) {
    bool visited[size] = {false};
    int freq[size];  
    int freqSize = 0;

    for (int i = 0; i < size; i++) {
        if (visited[i]) continue;

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }
        freq[freqSize++] = count; 
    }

    for (int i = 0; i < freqSize; i++) {
        for (int j = i + 1; j < freqSize; j++) {
            if (freq[i] == freq[j]) {
                return false; 
            }
        }
    }

    return true;
}

int main() {
    int arr1[] = {1,2,2,1,1,3};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << (uniqueOccurrences(arr1, size1) ? "true" : "false") << endl;

    int arr2[] = {1,2,2,1,1,2};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    cout << (uniqueOccurrences(arr2, size2) ? "true" : "false") << endl;

    return 0;
}
