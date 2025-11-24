#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 1, 0, 1, 0, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count0 = 0;

    // Count zeros
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) count0++;
    }

    // Fill 0's
    for(int i = 0; i < count0; i++)
        arr[i] = 0;

    // Fill 1's
    for(int i = count0; i < n; i++)
        arr[i] = 1;

    // Print result
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
