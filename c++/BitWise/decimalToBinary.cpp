#include<bits/stdc++.h>
using namespace std;
string decimal_to_binary(int num){
    string result = "";
    while (num > 0)
    {
        if (num % 2 == 0)
        {   // Even
            result = "0" + result;
        }else{ // Odd
            result = "1" + result;
        }
        num = num /2;
    }
    return result;
}
int main()
{
    string str = "00101001";
    cout<<decimal_to_binary(15);


return 0;
}