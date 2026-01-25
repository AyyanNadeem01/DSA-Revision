#include <iostream>
using namespace std;

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

int main() {
    cout << findSqrt(36) << endl;  // 6
    cout << findSqrt(27) << endl;  // 5
    return 0;
}
