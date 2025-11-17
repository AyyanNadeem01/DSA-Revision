#include<iostream>
using namespace std;
int reverseNumber(int num){
    int reversedNum=0;
    while(num!=0){
        int digit=num%10;
        if(reversedNum> (INT_MAX-digit)/10 || reversedNum< (INT_MIN-digit)/10){//where the INT_MAX and INT_MIN are the maximum and minimum values that can be stored in an integer variable. This condition checks whether adding the next digit to the current reversed number would cause it to exceed or go below these limits, which could result in overflow or underflow errors when storing the result as an integer. If this condition is true, then the function returns 0 to indicate that the reversal operation cannot be performed safely due to potential overflow or underflow issues.
            cout<<"out of bound occurred while reversing the number."<<endl;
            return 0;
        }
        reversedNum=reversedNum*10+digit;
        num=num/10;
    }
    return reversedNum;
}
int main(){
   
    return 0;
}