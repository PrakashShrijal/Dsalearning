#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){  // T.C = O(n);
    if(n==1) return false;
    for (int i = 2; i < n; i++)
    {
        if(n% i == 0) return false;
    }
    return true;
}
bool isPrime1(int n){
    if(n==1) return false;
    for (int i = 2; i <= sqrt(n); i++)  // why?   T.C = O(sqrt(n));
    {
        if(n% i == 0) return false;
    }
    return true;
}
int main()
{
     int x;
    cout<<"Enter the Number  :";
    cin>>x;
    bool flag = isPrime1(x);
    cout<<endl;
    if( flag == true) cout<<"Number is prime ";
    else cout<<"Number is not prime";
return 0;
}