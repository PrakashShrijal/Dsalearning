//DP using tabulation method , iterative DP , bottom-up dp.
#include<bits/stdc++.h>
using namespace std;

int fib(int n){   // In this we save the call stack memory.
    if(n<=1) return n;
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
    /*
      for(int i = 0; i<=n; i++){
      if(i<=1) dp[i] = i;
      else dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
    */
}

int main()
{
      int n;
    cout<<"Enter the Number :";
    cin>>n;
    cout<<"The fibonacci of "<<n<<" is :"<<fib(n);
return 0;
}