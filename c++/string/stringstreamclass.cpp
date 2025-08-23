#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
    string str = "prakash is   great  king";
    stringstream ss(str);
    string temp;
    
    while (ss>>temp)
    {
        cout<<temp<<endl;
    }
  

return 0;
}