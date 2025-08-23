#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cout<<"Enter the string :";
    // cin>>n;
    getline(cin,n);
    for (int i = 0; i <n.length(); i++)
    {
        if(i%2 !=0){
            n[i] = '#';
        }
    }
    cout<<n;
    
return 0;
}