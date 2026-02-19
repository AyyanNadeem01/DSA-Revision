#include <iostream>
using namespace std;
//selection sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {       // Go through each element
        int minValue = arr[i];                // Assume current element is the smallest
        int minIndex = i;                     // Index of the smallest element

        // Find the smallest element in the remaining unsorted part
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < minValue) {
                minValue = arr[j];           // Update smallest value
                minIndex = j;                // Update its index
            }
        }

        // Swap the smallest element with the current position
        if (minIndex != i) {                  // Only swap if needed
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {4, 3, 35, 6, 4, 44, 3, 22, 23, 1};
    selectionSort(arr, 10);
    return 0;
}
