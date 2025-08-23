// Given a sentence str , return the word that is lexicographically maximum.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string :";
    getline(cin,s);
    int n = s.size();
    string mx = "", word = "";
    for (int  i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            mx = max(mx,word);
            word = "";
        }else{
            word += s[i];
        }
        
    }
    mx = max(mx, word);
    cout << mx ;
    

return 0;
}