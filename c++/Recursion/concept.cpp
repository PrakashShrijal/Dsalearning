#include<bits/stdc++.h>
using namespace std;

void sumNtoM(int n, int m){
    int sum = 0;
    if(m == n) {
        cout<<sum+n <<endl;
        return;

    }
    sumNtoM(sum+m, m-1);
}



int main()
{
        int a,b;
    cout<<"Enter the base first and then power :";
    cin>>a>>b;
    sumNtoM(a,b);
return 0;
}