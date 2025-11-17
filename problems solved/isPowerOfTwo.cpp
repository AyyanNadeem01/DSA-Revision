#include<iostream>
using namespace std;
bool isPowerOfTwo(int num) {
    if(num <= 0) return false;
    int ans = 1;
    for(int i = 0; i <= 30; i++){
        if(ans == num)
            return true;
        if(ans < INT_MAX / 2)
            ans *= 2;
        else
            break; 
    }
    return false; }


int main(){
   
    return 0;
}