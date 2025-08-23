#include<iostream>
using namespace std;
// void factUpto(int n){
//     int f = 1;
//     for (int i = 1; i < n; i++)
//     {
//         f *= i;
//         cout<<f<<endl;
//     }
    
// }
int fact(int n){
   // base case
   if (n == 1 || n== 0)
   {
    return 1;
   }
   // recursive call
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the nunber you want factorial of : ";
    cin>>n;
    cout<<fact(n);
return 0;
}