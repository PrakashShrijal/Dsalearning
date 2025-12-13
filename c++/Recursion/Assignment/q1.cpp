//Q1. Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
//recursion.
#include<bits/stdc++.h>
using namespace std;
int sumodd(int a, int b, int sum){
    if(a>b) return sum;
    if(a%2 != 0){
        sum += a;
    }
   return  sumodd(a+1,b,sum);
    
    
}
int sumodd2(int a, int b){
    if(a>b) return 0;
    if(a%2 != 0){
        return a+sumodd2(a+1,b);

    }else{
        return sumodd2(a+1,b);
    }
}
int main()
{
    int a,b;
    cout<<"Enetr the two Number :";
    cin>>a>>b;
    
    //cout<<sumodd(a,b,0);
    cout<<sumodd2(1,10);
return 0;
}