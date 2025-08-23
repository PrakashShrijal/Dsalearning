#include<iostream>
using namespace std;

int  fibo(int n){
    if(n==0) return 0;
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
//    int left = fibo(n-1);
//    int right = fibo(n-2);
//    return left + right;
}
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    cout<<fibo(n);
return 0;
}