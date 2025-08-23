// return the btotal number of digits in a number without using any lopp.
// hint using inbuilt to_string() function
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int p = 1245678;
    string x = to_string(p);
    cout<<x.length();
return 0;
}