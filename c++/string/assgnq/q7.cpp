// find the second largest digit in the string consisting of digit from 0 to 9;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string p;
    cout << "Enter the string numbers :";
    cin >> p;
    cout<<p<<endl;
   char f = '?',s = '?';
   for(auto &i : p){
    if( f == '?' || i > f){
        s = f;
        f = i;
    }else if(i > s){
        s = i;
    }
   }
   if(s=='?')
   cout<<"NO second largest character ";
   else
   cout<<s;
    
    

return 0;
}