#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];        // The element we want to insert
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // one position ahead to make space for key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key; // Insert key at the correct position
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {4, 3, 35, 6, 4, 44, 3, 22, 23, 1};
    insertionSort(arr, 10);
    return 0;
}
