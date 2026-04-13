/*
1
01
1010
010101
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // method 1      using a variable
    // int a = 20; // just to initalize the varible could be anyhting
    // for (int i = 0; i < n; i++)
    // {
    //     if(i%2 != 0) a = 1;
    //     else a = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<a;
    //         // flipping
    //         if(a==1) a = 0;
    //         else a = 1;
    //     }
    //     cout<<endl;
    // }
    

    // mwthod 2
    for (int i = 0; i < n; i++)  // observation in this method is that sum of rows and col where there is 1 is even.
    {                            // or we can say that both are odd
        for (int j = 0; j < i; j++)
        {
            if((i+j) % 2 != 0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    
return 0;
}