#include<bits/stdc++.h>
using namespace std;
void square(int a){
    for (int  i = 1; i <= a; i++)
    {
        cout<<"square of : "<< i<<"is :"<<i*i<<endl;
    }
    
}
int main()
{
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    square(n);
return 0;
}