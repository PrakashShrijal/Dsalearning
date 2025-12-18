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
 int sumNToM(int n, int m) {
    if (n > m) return 0;      // base case
    return n + sumNToM(n + 1, m);
}


int main()
{   
  
    int a,b;
    cout<<"Enter the base first and then power :";
    cin>>a>>b;
  // sum1ton(a,b);
  // cout<<endl;
   cout<<sumNToM(a,b);
return 0;
}