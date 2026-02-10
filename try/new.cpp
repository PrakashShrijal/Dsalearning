// function to merge two sorted array
#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
    if (n <= 0) return false;

    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

int main()
{
    int n;
    cin>>n;
    int result = isPowerOfTwo(n);
    if(result == 0) cout<<"not power of 2 ";
    else cout<<"power of 2";

return 0;
}