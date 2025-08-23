#include<bits/stdc++.h>
using namespace std;
vector<int> dp;
int ftd(int n){
    if(n==1) return 0;
    if(n==2 or n==3) return 1;
    if(dp[n] != -1) return dp[n];
   return dp[n] = 1 + min(f(n - 1), min((n % 2 == 0 ? f(n / 2) : inf), (n % 3 == 0 ? f(n / 3) : inf)));

}    
int main()
{
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1005,-1);
    cout<<ftd(n)<<"\n";

return 0;
}