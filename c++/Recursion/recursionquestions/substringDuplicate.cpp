#include <bits/stdc++.h>
using namespace std;
void storeSubset(string ans, string original, vector<string> &v, bool flag)
{
    if (original == "")  //base case
    {
        v.push_back(ans);               //..........Do it again........... and dry run.......
        return;
    }
    char ch = original[0];
    if (original.length() == 1)   // when original string will left with 1 character....
    {
        if (flag == true)
        {
            storeSubset(ans + ch, original.substr(1), v,true);
            storeSubset(ans, original.substr(1), v,true);
            return;
        }
    }
    char dh = original[1];
    if(ch == dh){
        if(flag == true){
            storeSubset(ans + ch, original.substr(1), v,true);
            storeSubset(ans, original.substr(1), v,false);
        }
    }else{
       
        if (flag == true)
        {
            storeSubset(ans + ch, original.substr(1), v,true);
            storeSubset(ans, original.substr(1), v,true);
            
        }
    }
}
int main()
{
    string str;
    cout<<"Enter the string :";
    cin>>str;   // aaab
    vector<string> v;
    storeSubset("", str, v, true);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}