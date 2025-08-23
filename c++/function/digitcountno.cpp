#include<bits/stdc++.h>
using namespace std;
void numbercount(int num){
    int count = 0;
    while (num > 0)
    {
       num /= 10;
        count++;
        //count = floor(log10(abs(num)) +1);
    }
    cout<< "square of the number of digits  is :"<<count*count;
    
}
int main(){
    int n;
    cout<<"Enetr the number :";
    cin>>n;
    numbercount(n);
}