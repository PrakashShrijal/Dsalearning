#include<iostream>
using namespace std;
void swap(int &a, int &b){// passing by reference
    int temp = a;
    a = b;
    b = temp;
    
}
int main()
{
    int x,y;
    cout<<"enter the value of x :";
    cin>>x;
    cout<<"enter the value of y :";
    cin>>y;
    cout<<"value of x and y before swap:"<<"x = "<<x<<" "<<"y = "<<y<<endl;
    swap(x,y); // value are swaped
    cout<<"value of x and y after swap:"<<"x = "<<x <<" "<<"y = "<<y<<endl;
return 0;
}