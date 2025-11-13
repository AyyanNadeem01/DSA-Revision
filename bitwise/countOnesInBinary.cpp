#include<iostream>
using namespace std;

int main(){
    //int binary=1b010101;//binary number is not allowed in c++.
    int count=0;
    while(binary!=0){
        if(binary&1){
            count++;
        }binary=binary>>1;
    } 

    cout<<"There are "<<count<<" ones in the given number."<<endl;
    return 0;
 }
// int main() {
//     int num = 4;
//     int binary = 0;
//     int place = 1;
//     int count = 0;

//     while (num != 0) {
//         int rem = num % 2;
//         if (rem == 1)
//             count++;
//         binary = binary + rem * place;
//         num = num / 2;
//         place = place * 10;
//     }

//     cout << binary << endl;
//     cout << "There are " << count << " ones in the given number." << endl;

//     return 0;
// }
