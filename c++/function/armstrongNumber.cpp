#include <bits/stdc++.h>   // time complexity is O(D) d = digit.
using namespace std;

// Fast integer exponentiation: base^exp (no floating point)
long long fastPow(long long base, int exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

int countDigits(long long n) {
    if (n == 0) return 1;
    int d = 0;
    while (n) { n /= 10; ++d; }
    return d;
}

bool isArmstrong(long long n) {
    if (n < 0) return false;               // standard definition uses non-negative integers
    int d = countDigits(n);

    // Precompute digit^d for digits 0..9 once: speeds things up
    long long p[10];
    for (int digit = 0; digit <= 9; ++digit)
        p[digit] = fastPow(digit, d);

    long long sum = 0, x = n;
    while (x) {
        sum += p[x % 10];
        x /= 10;
        // (optional) early stop if sum already exceeds n to avoid overflow work
        if (sum > n) return false;
    }
    if (n == 0) sum = p[0];                // handle n=0 correctly (0^d = 0)
    return sum == n;
}

int main() {
    // Single check
    long long n;
    cout << "Enter a number: ";
    if (!(cin >> n)) return 0;
    cout << (isArmstrong(n) ? "Armstrong" : "Not Armstrong") << "\n";

    
    return 0;
}
