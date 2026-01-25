#include <iostream>
using namespace std;

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

int main() {
    int arr[] = {7, 9, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivot = findPivot(arr, n);

    cout << "Pivot Index: " << pivot << endl;
    cout << "Pivot Element: " << arr[pivot] << endl;

    return 0;
}
