// to check the given string is palindrome is not......
#include<bits/stdc++.h>
using namespace std;
bool check(string &s){
    int i = 0 , j=s.size() -1;
    while (i<= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }    i++;
            j--;

        
    }
}
    int main(){
        
        string s;
        cout<<"Enter the string :";
        cin>>s;
        cout<<(check(s) ? "yes": "No");
    
    
}