#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[], int n) {
    // Range: -1000 to 1000 → total 2001 indices
    int freq[2001] = {0};

    // Step 1: Count frequencies
    for(int i = 0; i < n; i++) {
        int index = arr[i] + 1000;   // shift to positive index
        freq[index]++;
    }

    // Step 2: Check if any frequency repeats
    int used[2001] = {0};  // used frequencies

    for(int i = 0; i < 2001; i++) {
        if(freq[i] > 0) {
            int f = freq[i];

            // if frequency already used → not unique
            if(used[f] == 1)
                return false;

            used[f] = 1;
        }
    }

    return true;
}

int main() {
    int arr[] = {1, 2, 2, 1, 1, 3};
    int n = 6;

    if(uniqueOccurrences(arr, n))
        cout << "true";
    else
        cout << "false";

    return 0;
}
