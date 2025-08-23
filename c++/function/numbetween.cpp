#include<bits/stdc++.h>
using namespace std;
void noBetween(int a, int  b){
    for (int  i = a+1; i < b; i++)
    {
        cout<<i<<" ";
    }
    
}

int main()
{
    int m,n;
    cout<<"enetr the two number :";
    cin>>m>>n;;
    noBetween(m,n);

return 0;
}