#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{// reverse of digit or  index change.......

    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    cout<<str<<endl;
   
   reverse(str.begin()+1,str.begin()+5);    //  r and a is reversed..............
   
    cout<<str;
return 0;
}