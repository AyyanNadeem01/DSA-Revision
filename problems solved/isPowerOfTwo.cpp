#include<iostream>
using namespace std;
bool isPOwerOfTwo(int num){
    int ans=1;
    for(int i=0;i<=30;i++){
         if(ans==num){
            return true;
        }
        if(ans<INT_MAX/2)
        ans=ans*2;
    return false;
    }
}
int main(){
   
    return 0;
}