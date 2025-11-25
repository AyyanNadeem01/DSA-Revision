#include <iostream>
#include <vector>
using namespace std;

void sortZeroOneTwoPointers(vector<int>& arr) {
    int left = 0;          
    int right = arr.size() - 1; 

    while(left < right) {
        if(arr[left] == 0) {
            left++;  
        } else { 
            swap(arr[left], arr[right]);
            right--;
        }
    }
}

int main() {
    vector<int> arr = {1, 0, 1, 1, 0, 0, 1, 0};
    
    sortZeroOneTwoPointers(arr);
    
    cout << "Sorted array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}
