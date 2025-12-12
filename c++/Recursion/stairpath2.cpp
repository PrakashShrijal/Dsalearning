/*
*either one step or 2 step or 3 step
* and their combination.
*/
#include<bits/stdc++.h>
using namespace std;

int stairs(int n){
    if(n< 0) return 0;
    if(n==0) return 1;
    return stairs(n-1) + stairs(n-2) + stairs(n-3);
}
int main()
{
    int n;
    cout<<"Enter the No. of stairs :";
    cin>>n;
    cout<<stairs(n);
return 0;
}
