// flio all the bits 

#include<bits/stdc++.h>
using namespace std;
string decimal_to_binary(int num){
    if(num == 0) return 0;
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


int make_all_1(int n){ // using the or, flipping all bits to one
    int i = 1;
    while (i<=16)
    {
        n = n | (n>>i);
        i = 2*i;
    }
    return n;
}
int make_all1_2(int n){  //flipping all the bit to 1 using Brian kerntglun's.
    if(n == 0) return 0;
     int temp = n;
    while (n!=0)
    {
        temp = n;
        n = n & (n-1);
    }
    int x = temp;
    x = x<<1;  // left shift by 1.
    return (x-1);
}
void  flipbit(int n){
    int x = make_all1_2(n);
    int y= n^x;
    cout<<y;
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<decimal_to_binary(n)<<"\n";
    flipbit(n);
//    int p = flipbit(n);
//    cout<<p<<"\n"<<decimal_to_binary(p);
return 0;
}