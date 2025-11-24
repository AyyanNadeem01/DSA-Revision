#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, -1, 0, 5, -2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;

    cout << "Triplets with sum " << target << ": " << endl;

    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == target) {
                    cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
                }
            }
        }
    }

    return 0;
}
