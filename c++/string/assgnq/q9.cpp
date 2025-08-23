//given an aaray of strings. check whether they are anagram or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "prakash";
    string  b ="shaakrp";
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if (a == b)
    {
        cout<<"anagram";
    }else
    cout<<" Not a anagram.";
    
return 0;
}