#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int k = 1; k <= (2*i-1); k++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
    // }
    
    // method 2
    int nst = 1;
    int nsp = n-1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < nsp; j++)
        {
            cout<<"  ";
            
        }
        nsp--;
        for (int k = 0; k < nst; k++)
        {
            cout<<"* ";
            
        }
        nst += 2;
        cout<<endl;
    }
    
return 0;
}