/*write a function to print square of the first 5 natural numbers.*/


#include<iostream>
using namespace std;
int square(int x){
    return x*x;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<square(i)<<"\n";
    }
    return 0;
}