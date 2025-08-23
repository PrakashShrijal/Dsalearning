#include <bits/stdc++.h>//38
using namespace std;
string countAndSay(int n)
{
    if (n == 1)
    {
        return "1";
    }
    string str = countAndSay(n - 1);
    string ztr = "";
    int fre = 1;
    char ch = str[0];
    for (int i = 1; i < str.length(); i++)
    {
        char dh = str[i];
        if (ch == dh)
        {
            fre++;
        }
        else
        {
            ztr += (to_string(fre) + ch); // concatenate frequency as string with repeating ch;
            fre = 1 ; // reseting fre =1
            ch = dh;
        }
    }
    ztr += (to_string(fre) + ch);
    return ztr;
}
int main()
{    /*
    * cas(1) = 1;
    * cas(2) = 11;
    * cas(3) = 21
    * cas(4) = 1211
    * cas(5) = 111221
    * cas(6) = 312211
    */
    int n;
    cout << "enter the number :";
    cin >> n;
    cout << countAndSay(n);

    return 0;
}