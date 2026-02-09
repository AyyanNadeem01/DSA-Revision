#include <iostream>
using namespace std;
//pair sum
int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 6;

    cout << "Pairs with sum " << target << ": ";
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ") ";
            }
        }
    }
    cout << endl;
    return 0;
}
