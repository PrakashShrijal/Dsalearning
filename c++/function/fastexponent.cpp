#include<bits/stdc++.h>
using namespace std;
int fastPow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp & 1) {     // if odd exponent
            result *= base;
        }
        base *= base;
        exp >>= 1;         // divide exp by 2
    }
    return result;
}

int main()
{
    cout<<fastPow(9,2);  // note  the time complexity is O(log n) where n = exponent
    
return 0;
}