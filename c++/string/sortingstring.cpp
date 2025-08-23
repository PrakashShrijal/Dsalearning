#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
   // cin>>s;
   getline(cin,s);// space will come first while sorting.why?
    sort(s.begin(),s.end());
    cout<<s;
return 0;
}
// answer to why becoz it works on ASCII vaule while sorting.  (Lexicographical order)
//prakash shrijal is king
//   aaaghhiiijkklnprrsss       output
// another output
// #@ prakash shrijal is king !%
//      !#%@aaaghhiiijkklnprrsss