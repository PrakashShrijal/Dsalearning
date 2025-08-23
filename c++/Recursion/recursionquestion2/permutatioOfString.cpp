#include <bits/stdc++.h>
using namespace std;

void generate(string s,vector<string>& v, string original)
{
    if (original.length() == 0)
    {
       v.push_back(s);
        return;
    }
    
    
}



int main()
{
    string n;
    cout << "Enter the number :";
    cin >> n;
    vector<string> v;
    generate("",v, n);
    cout<<endl;
   
    
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    
}