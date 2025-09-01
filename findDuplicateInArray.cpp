#include <iostream>
using namespace std;
//input: [1, 2, 3, 2, 4, 5, 1, 6, 3]
//output: 1,2,3
void findDuplicates(int arr[], int n) {
    cout << "Duplicates: ";
    bool found = false;

    for (int i = 0; i < n; i++) {
        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted) continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found) cout << "None";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}
