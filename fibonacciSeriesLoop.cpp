#include<iostream>
using namespace std;

int main(){
    int length=10;
    int t1=0,t2=1,nextTerm;
    cout<<"Fibonacci Series: "<<endl;
    for(int i=1;i<=length;i++){
        cout<<t1<<", ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return 0;
}