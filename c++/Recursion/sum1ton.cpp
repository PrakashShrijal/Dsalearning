#include<iostream>
using namespace std;
//parametrised
void sum1ton(int sum, int m){
    if(m == 0){
        cout<<sum<<endl;
        return;
    }
    sum1ton(sum+m ,m-1);

}
// print sum from 1 to n (return type)
int sumn(int n){
    if(n == 0){
        return 0;
    }
    return n + sumn(n-1);
}

//print sum from one no. to another number.
 void sumNToM(int n, int m){
   
    if(m == n){
        cout<<n<<endl;
        return ;
    }
    sumNToM(n+m, m-1);
 }

int main()
{   
  
    int a,b;
    cout<<"Enter the base first and then power :";
    cin>>a>>b;
  // sum1ton(a,b);
  // cout<<endl;
   sumNToM(a,b);
return 0;
}