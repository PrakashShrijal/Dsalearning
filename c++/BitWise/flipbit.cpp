#include<bits/stdc++.h>
using namespace std;
int make_all_1(int n){ // using the or.
    int i = 1;
    while (i<=16)
    {
        n = n | n>>i;
        i++;
    }
    return n;
}
int make_all1_2(int n){  //flipping all the bit to 1 using Brian kerntglun's.
     int temp;
    while (n!=0)
    {
        temp = n;
        n = n & (n-1);
    }
    int x = temp;
    x = x<<1;  // left shift by 1.
    return (x-1);
}
void flipbit(int n){
    int x = make_all1_2(n);
    int y= n^x;
    cout<<y;
}
int main()
{
   flipbit(15);
return 0;
}