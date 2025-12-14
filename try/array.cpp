#include<bits/stdc++.h>
using namespace std;

string skip(string s,string n){
   if(s.length() == 0) return n;
   if(s[0] != 'a')
   return skip(s.substr(1),n+s[0]);
   else
   return skip(s.substr(1),n);
}

int main()
{
   string s;
   cout<<"Enter the string :";
   getline(cin, s);
   cout<<skip(s,"");
return 0;
}