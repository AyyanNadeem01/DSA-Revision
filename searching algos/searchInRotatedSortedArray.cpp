#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int target) {
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

int findPivot(int arr[], int n) {
    int s = 0, e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }

    return s; 
}
int searchInRotatedArray(int arr[], int n, int target) {
    int pivot = findPivot(arr, n);

    // Case 1: target lies in left sorted part
    if (target >= arr[0] && target <= arr[pivot - 1]) {
        return binarySearch(arr, 0, pivot - 1, target);
    }
    // Case 2: target lies in right sorted part
    else {
        return binarySearch(arr, pivot, n - 1, target);
    }
}


int main() {
    int arr[] = {7, 9, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 3;

    int index = searchInRotatedArray(arr, n, target);

    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
