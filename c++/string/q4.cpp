#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{// substring  concept
     string str;
     cout<<"Enter the string :";
     getline(cin,str);
     int n = str.length();
     cout<<str.substr(n/2);// string after n/2 will be printed
return 0;
}