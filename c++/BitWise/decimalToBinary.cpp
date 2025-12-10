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
        num = num /2;  // we can use << right shift by 1 which means division by 2^1.
    }
    return result;
}
int main()
{
  //  string str = "00101001";
  int n;
  cout<<"Enter the number:";
  cin>>n;
    cout<<decimal_to_binary(n);


return 0;
}