#include <iostream>
using namespace std;


int bitwiseComplement(int n){
    int m=n;
    int mask=0;
    if(n==0) return 1;//edge case
    while(n!=0){
        mask=(mask<<1)|1;
        m=m>>1
    }
    int ans=(~n)&mask;
    return ans;
}
int main(){

    return 0;
}