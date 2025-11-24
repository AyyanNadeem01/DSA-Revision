// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int array[9]={2,3,5,2,16,8,9,4,51};
    int start=0;int end=8;
    while(start<end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;
    }
    
    for(int i=0;i<9;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}