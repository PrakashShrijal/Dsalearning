#include <bits/stdc++.h>
using namespace std;
// recursion
void removechar(string ans, string original)
{
    if (original.length() == 0)
    {
        cout << ans;
        return;
    }
    char ch = original[0];
    if (ch == 'a')
        removechar(ans, original.substr(1));
    else
        removechar(ans + ch, original.substr(1));
}/* this is not efficient code as for every ans new string is generated of length of double the previous.
  *also for every substring new string is created. so, this is not efficient in terms of space complexity.
  * ........... solution to this is using index of the string using third parameter as input index in recursive 
  * call. 
*/
void removeChar(string ans, string original,int idx){
    if(idx == original.length()){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch == 'a') removeChar(ans,original,idx+1);
    else removeChar(ans+ch,original,idx+1);
}

int main()
{
    // iterative way..
    string str = "prakash Shrijal";
    string s = "";
    removechar(s, str);
    cout<<endl;
    removeChar(s,str,0);
    // this is using iteration........
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if(str[i] != 'a')
    //     //s +=str[i];
    //      s.push_back(str[i]);
    // }
    // cout<<s;

    return 0;
}