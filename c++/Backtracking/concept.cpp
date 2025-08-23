#include<bits/stdc++.h>
using namespace std;

void permutation(string &str, int idx){
    if(idx == str.size() - 1){
        cout<<str<<"\n";
        return;
    }
    for (int i = idx; i < str.size(); i++)
    {
        swap(str[i],str[idx]);
        permutation(str,idx+1);
        swap(str[i], str[idx]);
    }
    
}
int main()
{
     string str = "abc";// all char are different..
     permutation(str,0);
return 0;
}