#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=2;
    cout<<"Decimal: "<<n<<endl;
    
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        i++;
        n=n>>1;
    }

    cout<<"Binary: "<<ans;
    return 0;
 }

 //negative number to binary
//  #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a negative decimal number: ";
//     cin >> n;

//     if (n >= 0) {
//         cout << "Please enter a negative number!" << endl;
//         return 0;
//     }

//     int num = -n; // take absolute value
//     vector<int> binary;

//     // Step 1: Get binary of absolute value
//     while (num > 0) {
//         binary.push_back(num % 2);
//         num /= 2;
//     }

//     // Pad to 8 bits (or 32 for full width)
//     while (binary.size() < 8)
//         binary.push_back(0);

//     // Step 2: Invert bits
//     for (int i = 0; i < binary.size(); i++)
//         binary[i] = binary[i] == 0 ? 1 : 0;

//     // Step 3: Add 1
//     int carry = 1;
//     for (int i = 0; i < binary.size(); i++) {
//         int sum = binary[i] + carry;
//         binary[i] = sum % 2;
//         carry = sum / 2;
//     }

//     cout << "Binary (8-bit two's complement): ";
//     for (int i = binary.size() - 1; i >= 0; i--)
//         cout << binary[i];

//     cout << endl;
//     return 0;
// }
