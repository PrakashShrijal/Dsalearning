#include<bits/stdc++.h>
using namespace std;
void factor(int n){  // T.C = O(n)
 for (int i = 1; i < n; i++)
    {
        if(n % i == 0) cout<<i<<" ";
    }
    cout<<endl;
}
void factor1(int n){  // T.C = O(sqrt(n))
 for (int i = 1; i*i <= n; i++)
    {
        if(n % i == 0) cout<<i<<" "<<n/i<<" ";
    }
    cout<<endl;
}
void factor2(int n){  // T.C = O(sqrt(n)) , in sequence
 for (int i = 1; i*i < n; i++)
    {
        if(n % i == 0) cout<<i<<" ";
    }
for (int i = sqrt(n) ; i >= 1; i--)
    {
        if(n % i == 0) cout<<n/i<<" ";
    }    
    cout<<endl;
}
int main()
{
    int x;
    cout<<"Enter the Number  :";
    cin>>x;
   factor2(x);
    
return 0;
}