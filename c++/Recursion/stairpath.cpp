/*
*either one step or 2 step
* and their combination.
*/

#include<iostream>
using namespace std;
int stair(int n){
    if(n==1)return 1;
    if(n==2)return 2;
    int ansleft =stair(n-2);
    int ansright = stair(n-1); 
    return ansleft + ansright ;

}

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"no. of ways of to get on stairs top :"<<" "<<stair(n);
return 0;
}