#include<iostream>
using namespace std;

  void swapAlternate(int arr[], int size) {
    
    for (int i = 0; i+1 < size; i += 2) {
    int temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
}

}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main (){

    int arr[9]={1,2,5,4,7,8,9,0,9};
    printArray(arr,9);
    swapAlternate(arr,9);
    printArray(arr,9);
}