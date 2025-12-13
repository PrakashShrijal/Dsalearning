/*        Given a positive integer, return true if it is a power of 2.
*/
#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;   // handles 0 and negatives
    if (n == 1) return true;    // 2^0

    if (n % 2 != 0) return false;

    return isPowerOfTwo(n / 2);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (isPowerOfTwo(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}
