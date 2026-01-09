#include <iostream>
using namespace std;

int peakElement(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;   // move right
        } else {
            end = mid;         // move left or stay
        }
    }
    return start;  // peak index
}

int main() {
    int arr[] = {1, 3, 5, 7, 6, 4, 2};
    int size = 7;

    int index = peakElement(arr, size);
    cout << "Peak element is " << arr[index]
         << " at index " << index;

    return 0;
}
