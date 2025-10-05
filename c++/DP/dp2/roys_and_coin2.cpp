/* Roy has N coin boxes numbered from 1 to N.
Every day he selects two indices [L,R] and adds 1 coin to each coin box starting from L to R (both inclusive).
He does this for M number of days.

After M days, Roy has a query: How many coin boxes have atleast X coins.
He has Q such queries.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> f(n+10, 0);
    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int L, R;
        cin>>L>>R;
        f[L]++;
        f[R+1]--;
    }
    for (int i = 1; i < f.size(); i++)
    {
        f[i] = f[i] + f[i-1];
    }

    vector<int> c(10000005,0);

    for (int i = 0; i <= n; i++)
    {
        int coins = f[i];
        c[coins]++;
    }
    
    for (int i = c.size(); i >= 0; i--)
    {
        c[i] = c[i] + c[i+1];
    }
    int q;
    cin>>q;
    while (q--)
    {
        int num;
        cin>>num;
        cout<<c[num]<<"\n";
    }
    
   /*
   7 4
1 3
2 5
1 2
5 6
4
1 7 4 2
6
0
0
4
   */ 
    
    
return 0;
}