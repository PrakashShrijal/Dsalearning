// dp in ficonacci number.
#include<bits/stdc++.h>
using namespace std;

int fibo(int n, vector<int>& dp){
    if(n<=1) return n;
    if(dp[n] != -1)return dp[n];
    dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
    return dp[n];
}

int fib(int n){
    vector<int> dp(n+1, -1);
    return fibo(n, dp);
}


int main()
{

    int n;
    cout<<"Enter the Number :";
    cin>>n;
    cout<<"The fibonacci of n is :"<<fib(n);

return 0;
}