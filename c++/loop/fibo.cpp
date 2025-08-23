#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cout<<"Enter the number n :";
    cin>>n;
    int p = 0;
    int q = 1;
    for (int  i = 0; i < n; i++)
    {   if(p == 0 && q== 1)
        cout<<p<<" "<<q<<" ";
        int sum   = p+q ;
        cout<<sum<<" ";
        p = q;
        q = sum;
       
        
    }
    


return 0;
}