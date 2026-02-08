#include <iostream>
#include <vector>
using namespace std;
// This algorithm sorts an array containing only 0s, 1s, and 2s in linear time and constant space.
void sort012(vector<int>& arr) {
    int low = 0;              
    int mid = 0;             
    int high = arr.size() - 1;

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } 
        else if(arr[mid] == 1) {
            mid++;
        } 
        else { 
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main() {
    vector<int> arr = {2, 0, 1, 2, 1, 0, 0, 2, 1};

    sort012(arr);

    cout << "Sorted array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
