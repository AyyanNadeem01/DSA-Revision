#include <iostream>
#include <algorithm>
using namespace std;

void findDuplicates(int arr[], int n) {
    sort(arr, arr+n);  
    bool found = false;
    cout << "Duplicates: ";

    for(int i = 0; i < n-1; i++) {
        if(arr[i] == arr[i+1]) {
            if(i == 0 || arr[i] != arr[i-1]) {  
                cout << arr[i] << " ";
                found = true;
            }
        }
    }

    if(!found) cout << "None";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    findDuplicates(arr, n);
    return 0;
}
