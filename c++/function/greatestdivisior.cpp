#include<iostream>
using namespace std;
int gcd(int a, int b){
    int hcf = 1;
    for (int i = 1; i <= min(a,b); i++)
    {
        if (a%i == 0 && b%i == 0)
        {
            hcf = i;
        }
        
    }
    return hcf;
}

int gCD(int a, int b){
    int hcf = 1;
    for (int  i = min(a,b); i >=1; i--)
    {
        if (a%i == 0 && b%i == 0)
        {
            hcf = i;
            break;
        }
        
    }
    return hcf;
    
}
int main()
{

    int m,n;
    cout<<"Enter the first NUmber :";
    cin>>m;
    cout<<"Enter the second Number :";
    cin>>n;
    cout<<gcd(m,n)<<endl;
    cout<<gCD(m,n);
return 0;
}