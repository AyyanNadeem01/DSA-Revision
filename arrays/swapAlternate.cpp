#include <iostream>
using namespace std;
//swap alternate
int main() {
    int array[9]={2,3,5,2,16,8,9,4,51};

    for(int i=0;i<8;i=i+2){
        int temp=array[i];
         array[i]=array[i+1];
        array[i+1]=temp;
    }
    
    for(int i=0;i<9;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
