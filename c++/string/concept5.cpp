#include<iostream>
#include<string>
using namespace std;
int main()
{

    string sr = " 0000012345";
    long long x = stoll(sr);  // zeros will be ignored...
    int p = stoi(sr);
    cout<<p<<endl;
    cout<<x;
return 0;
}