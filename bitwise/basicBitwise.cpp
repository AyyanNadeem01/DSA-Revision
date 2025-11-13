#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=6;

    cout<<"Basic Bitwise Operations:"<<endl;
    cout<<"a&b :"<<(a&b)<<endl;
    cout<<"a|b :"<<(a|b)<<endl;
    cout<<"~a :"<<~a<<endl;
    cout<<"a^b :"<<(a^b)<<endl;//XOR


    cout<<"\nLeft Shift Operator:"<<endl;//left shift in most cases multply by 2 n times where n is number of positions shifted
    cout<<(17<<1)<<endl;//left shift by one position
    cout<<(17<<2)<<endl;//left shift by two positions

    cout<<"\nRight Shift Operator:"<<endl;//left shift in most cases divide by 2 n times where n is number of positions shifted
    cout<<(19>>1)<<endl;//right shift by one position
    cout<<(19>>2)<<endl;//right shift by two positions
    
    //padding is always 0 for unsigned numbers
    return 0;
}