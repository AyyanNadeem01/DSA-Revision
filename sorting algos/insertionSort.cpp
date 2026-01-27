#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int currentValue = arr[i];   // The value we want to insert
        int minIndex = i;            // Temporary index for shifting

        // Shift elements in the sorted part that are greater than currentValue
        int j = i - 1;
        while (j >= 0 && arr[j] > currentValue) {
            arr[j + 1] = arr[j];   // Move element one step to the right
            minIndex = j;          // Update the index where currentValue will go
            j--;
        }

        arr[minIndex] = currentValue; // Insert at the correct position
    }

    // Print sorted array
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
