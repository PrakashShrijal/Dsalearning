#include <bits/stdc++.h>
using namespace std;
vector<long long int> factorial(int n)
{
    vector<long long int> fact(n + 1, 1);
    int MOD = 1000000000 + 7;
    for (int i = 2; i <= n; i++)
    {
        fact[i] = ((i % MOD) * (fact[i-1] % MOD)) % MOD;
    }
    return fact;

}
int main()
{ 
    int n;
    cout<<"Enter the number :";
    cin>>n;
    vector<long long int> res = factorial(n);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<i<<"!"<< res[i]<<"\n";
    }
    
    return 0;
}