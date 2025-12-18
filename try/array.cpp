#include<bits/stdc++.h>
using namespace std;

void subset(string ans,string original,int idx,vector<string> &v){
   if(idx == original.length()) {
      v.push_back(ans);
      return;
   }
   char ch = original[idx];
   subset(ans + ch, original,idx+1,v);
   subset(ans,original, idx+1,v);
   
}
int main()
{
   string s;
   vector<string> v;

   cout<<"Enter the string :";

   getline(cin, s);
   subset("",s,0,v);
   for (string ele : v)
   {
      cout<<ele<<" ";
   }
   

return 0;
}