#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
    cout << "Enter the string :";
    cin >> s;
    cout<<s<<endl;
    string temp = s;
    reverse(temp.begin(), temp.end());
    s += temp;
    cout<<s;
return 0;
}