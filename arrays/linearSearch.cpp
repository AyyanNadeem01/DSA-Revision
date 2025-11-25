#include<iostream>
using namespace std;
//input:[1,2,3,4,5,6]
//number to search: 4
//output: Yes its found!
bool LinearSearch(int arr[],int size,int n){
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            return 1;
        }
    }
    return 0;
}

int main (){

    char iter='y';
    do{
        int Size;
        cout<<"Enter Size of Array :";
        cin>>Size;

        int arr[Size];
        
        cout<<"Enter Elements of Array:";
        for(int i=0;i<Size;i++){
            cin>>arr[i];
        }

        cout<<"Enter Number to Search: ";
        int n;
        cin>>n;
        if(LinearSearch(arr,Size,n)){
            cout<<"Yes its found!"<<endl;
        }else{
            cout<<"Sorry Cannot found"<<endl;
        }

        cout<<"Enter N or n to Stop:";
        cin>>iter;

    }while(iter!='n'&& iter!='N');
    return 0;
}