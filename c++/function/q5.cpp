/* To print the prime using the function*/


#include<iostream>
using namespace std;
// checking of prime.
bool isprime(int num) {  //logic 1.
    for(int i = 2; i <=(num-1); i++){
    if(num % i == 0)
    return false;
    }
    return true; 
    }

    bool isprimebtr(int num){       //logic 2.
        for (int i = 2; i*i <= num; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
            return true;
        }
        
    }

int main(){
    int a = 2,n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<isprime(n);
    for (int i = a; i <= n; i++)
    {
        if (isprimebtr(i))
        {
            cout<<i<<" ";
        }
        
    }
    return 0;
}
