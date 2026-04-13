// 1 -3 5 -7 9 11
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1;
    //int  a=1;
    // while (i <= n)
    // {
    //     if(a % 2 == 0) cout<< -i<<" ";
    //     else cout<<i<<" ";
    //     i += 2;
    //     a++;
    // }
    // while (i <= n)
    // {
    //     if(i%2 == 1) cout<< (2*i-1);
    //     else cout<<-(2*i-1);
    //     cout<<" ";
    //     i++;
    // }

    int b = 1;
    while (i <= n)
    {
        cout<<(2*i-1) *b<< " ";
        i++;
        b = -b;
    }
    
    
return 0;
}