#include<iostream>
using namespace std;
//input:1, 2, 3, 2, 1, 3, 5
//output: 5
int findUnique(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans ^= arr[i];   
    }
    return ans;
}

int main() {
    int arr[7] = {1, 2, 3, 2, 1, 3, 5};  
    cout << "Unique element: " << findUnique(arr, 7) << endl;
    return 0;
}
