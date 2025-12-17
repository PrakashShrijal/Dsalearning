#include <iostream>
#include <string.h>
#include<algorithm>
using namespace std;
int main()
 {
//     string str = "I am Genius";
//     cout << str.length()<<endl; // 11 to count length of string (space  is also counted)
//     string p = "prakash ";
//     cout << p<<endl;
//     p.push_back(' ');
//     p.push_back('i');
//     p.push_back('s');
//     p.push_back(' ');
//     p.push_back('g');
//     p.push_back('E');
//     p.push_back('n');
//     cout << p<<endl;
//     p.pop_back();
//      cout << p<<endl;

    // // + operator
    //  string add = "prakash";
    //  cout<<add<<endl;
    //  string addup = " is great";
    //  add = add + addup;
    //  cout<<add<<endl;
    //  add = add + "1";  // appaneds 
    //  cout<<add<<endl;

    // reverse operations
    string str = "I am Genius";
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
     reverse(str.begin()+2,str.end()-1);
     cout<<str<<endl;

    // substr() substring
      string s = "abcdefgh";
      cout<<s.substr(2)<<endl;  //  print all after index 2 
    //             // idx,length
    //  cout<<s.substr(2,5);



     // to_string() -> conveert integer  to string.
     int x = 12334;
    // string p = (string)x;  // gives error typecasting
     string p = to_string(x);
     cout<<p;






    return 0;
}