#include <iostream>
using namespace std;
//this algo places largest on the right by swapping, and follow this approach iteratively
// a stable algo
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;   

        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // If no swaps happened, the array is already sorted
        if (!swapped)
            break;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
