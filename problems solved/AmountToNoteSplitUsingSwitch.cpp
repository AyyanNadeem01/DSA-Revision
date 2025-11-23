#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    int note;

    while (amount > 0) {

       
        if (amount >= 1000) note = 1000;
        else if (amount >= 500) note = 500;
        else if (amount >= 100) note = 100;
        else if (amount >= 50)  note = 50;
        else if (amount >= 20)  note = 20;
        else note = 10;

       switch (note) {
            case 1000:
                cout << "1000 = " << amount / 1000 << endl;
                amount %= 1000;
                break;

            case 500:
                cout << "500 = " << amount / 500 << endl;
                amount %= 500;
                break;

            case 100:
                cout << "100 = " << amount / 100 << endl;
                amount %= 100;
                break;

            case 50:
                cout << "50 = " << amount / 50 << endl;
                amount %= 50;
                break;

            case 20:
                cout << "20 = " << amount / 20 << endl;
                amount %= 20;
                break;

            case 10:
                cout << "10 = " << amount / 10 << endl;
                amount %= 10;
                break;
        }
    }

    return 0;
}
