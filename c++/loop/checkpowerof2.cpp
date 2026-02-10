#include<bits/stdc++.h>
using namespace std;

bool ispowerof2(int n){
    if(n <= 0) return false;
    while (n%2 == 0)
    {
        n /= 2;
    }
    return n == 1;
}
int main()
{
    int n;
    cin>> n;
    cout<<ispowerof2(n);
return 0;
}