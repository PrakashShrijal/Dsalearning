// to check the given string is palindrome is not......

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the palindrome string :";
    cin>>s;
    int i = 0;
    int j = s.length()-1;
    bool flag = true;
    while (i<=j)
    {
        if(s[i] != s[j])
        flag = false;
        i++;
        j--;
    }
    if(flag){
        cout<<"it is palindreome "<<endl;
    }
        else{
            cout<<"It is not a palindrome.";
        }
    
    

return 0;
}