#include<iostream>
using namespace std;

  void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main (){

    int arr[10]={1,2,5,4,7,8,9,0,9,1};
    printArray(arr,10);
    reverseArray(arr,10);
    printArray(arr,10);
}