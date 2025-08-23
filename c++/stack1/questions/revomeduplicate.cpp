#include<bits/stdc++.h>
using namespace std;
// string duplicate(string s){
   
//     string ans = "";
//     for (int i = 1; i < s.length(); i++)
//     {
//        if (s[i] != s[i-1]) 
//        ans += s[i-1];
//     }
    
//     return ans;
// }


//use of stack...
string removeDuplicate(string s){
    stack<int> st;
    st.push(s[0]);
    for (int  i = 1; i < s.length(); i++)
    {
        if(s[i] != st.top()) st.push(s[i]);
    }
    s = "";
    while (st.size()>0)
    {
        s +=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
    
    
}
int main()
{
string s;
cout<<"Enter the duplicate alphabets :";
cin>>s;
cout<<removeDuplicate(s);
   
return 0;
}