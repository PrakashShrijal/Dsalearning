#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m = n-1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m-i+1 ; j++)
        {
            cout<<j<<" ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"  ";
        }
        for (int j = (n+i)  ; j <= 2*m+1; j++)
        {
            cout<<j<<" ";
        }
        
        cout<<endl;
        
    }
    
return 0;
}