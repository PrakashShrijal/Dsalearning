// print from n to 1 using recursion.
#include<iostream>
using namespace std;

void dispaly(int n){
    // base case
    if (n == 0)
    {
        return;
    }
    cout<<n<<endl;  //work
    dispaly(n-1);  //call
    
}

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    dispaly(n);
return 0;
}