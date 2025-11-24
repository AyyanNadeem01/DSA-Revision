#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int array[10]  = {2,3,5,2,16,8,9,4,51,0};
    int array2[10] = {1,2,3,4,5,6,7,8,9,10};

    sort(array, array+10);
    sort(array2, array2+10);

    int i = 0, j = 0;
    cout << "Intersection: ";
    while(i < 10 && j < 10) {
        if(array[i] < array2[j]) i++;
        else if(array[i] > array2[j]) j++;
        else {
            if(i == 0 || array[i] != array[i-1])  // avoid duplicates
                cout << array[i] << " ";
            i++; j++;
        }
    }
    cout << endl;
}
