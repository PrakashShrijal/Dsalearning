#include <bits/stdc++.h>
using namespace std;
void print(int n){
   if(n == 0) return;
   cout<<n<<endl;
   print(n-1);
    
    
}
int print1(int n){
   if(n==1) return 1;
   return n+ print1(n-1);
    
    
}
void print3(int m, int n){
   int p =1;
   if(n==0){
    cout<<p<<endl;
    return;
   }
   print3(p*m, n-1); 
    
}
int fibo(int n){
   if(n==1 || n==2) return 1;
   return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
   //  int m;
   //  cin >>m;
    //cout<<print1(n);
   // print3(m,n);
   cout<<fibo(n);

    return 0;
}