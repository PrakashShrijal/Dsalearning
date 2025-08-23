#include<iostream>
using namespace std;
int power(int a, int b){
    int p = 1;
    for (int i = 0; i <= b; i++)
    {
        p *= a;
    }
    return p;
    
}
int main()
{
    int n,m;
    cout<<"Enter number : and power :";
    cin>>n>>m;
    cout<<power(n,m);
return 0;
}