#include<iostream>
using namespace std;
inline int greatest(int x,int y,int z){
    if (x > y && x > z){
        return x;
    }else if (y > x && y > z){
        return y;
    }else{
        return z;
    }
  
    //  here we can also use ternary operator
    //return (a>b)?((a>c)?a:c):((b>c)?b:c); this is an example of inline function.
}
int main()
{
    int a,b,c;
    cout<<"Enter the three number :";
    cin>>a>>b>>c;
    cout<<endl;
    cout<<"The greatest number is : "<<greatest(a,b,c);
return 0;
}