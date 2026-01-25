#include <iostream>
using namespace std;
double morePrecision(int num, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++) {
        factor /= 10;

        for (double j = ans; j * j <= num; j += factor) {
            ans = j;
        }
    }
    return ans;
}

int findSqrt(int num) {
    int s = 0;
    int e = num;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        long long square = 1LL * mid * mid;

        if (square == num) {
            return mid;
        }
        else if (square < num) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

#include <iostream>
using namespace std;

int main() {
    int num = 27;

    int intPart = findSqrt(num);
    double result = morePrecision(num, 3, intPart);

    cout << "Square root of " << num << " is: " << result << endl;

    return 0;
}
