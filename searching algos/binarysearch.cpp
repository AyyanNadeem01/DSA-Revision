#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int val) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == val) {
            return mid;
        }
        else if (val > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int size = 10;
    int val = 10;
    int array[10] = {3,4,5,6,7,8,9,10,12,13};

    int index = binarySearch(array, size, val);

    if (index == -1) {
        cout << "Failed to find!";
    } else {
        cout << "Found at index " << index;
    }
    return 0;
}
