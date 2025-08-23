// print from 1 to n of a given number using two parameter.
//using extra parameter. 

#include<iostream>
using namespace std;
// void print(int n){
// int i = 1;
// while(i<=n){
//     cout<<i<<endl;
//     i++;
// }

// }

void print(int i,int n){
    if (i>n) return;
    cout<<i<<endl;
    print(i+1, n);
   
    
}

int main()
{
    cout<<"Enter  the value  of n :";
int n;
cin>>n;
    print(1,n);
return 0;
}