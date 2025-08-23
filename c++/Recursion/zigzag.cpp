#include<iostream>
using namespace std;
void zigzag(int n){
    if(n==0) return;
    cout<<n;    // pre
    zigzag(n-1);
    cout<<n;   //In
    zigzag(n-1);
    cout<<n;      //post

}
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<endl;
    zigzag(n);
    cout<<endl;
return 0;
}