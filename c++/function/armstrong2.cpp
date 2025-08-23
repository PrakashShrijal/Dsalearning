#include<bits/stdc++.h>  //  TC = O(d^2)
using namespace std;
int armstrong(int n){
    int power = 0;
    int temp = n;
    while (temp != 0)
    {
        temp = temp/10;
        power++;
    }
    int result = 0;
    for (int i = 0; i < power; i++)
    {
        int digit = n % 10;
        
        int m = power;
        int p = 1;
        while (m != 0)
        {
            p *= digit;
            m--;
        }
        result += p;
        n /= 10;
    }

   
        
    
    
   return result; 
    
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n == armstrong(n))

    cout<<"Number is Armstrong NUmber  " << armstrong(n);
    else cout<<"It is not a Armstong Number!";

  
return 0;
}