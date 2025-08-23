#include<iostream>
using namespace std;
bool isodd(int num){
    if (num % 2 == 0)
    {
        return false;
    }else
    {
        return true;
    }
    
    
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        if(isodd(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}


