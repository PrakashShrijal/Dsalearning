#include<bits/stdc++.h>
using namespace std;

int  gCD(int a, int b){   // hcf
    if(a== 0) return b;
    else return gCD(b%a , a);
}
// Time Complexity here will be O(log(a+b))  why?



int main()
{
    int m,n;
    cout<<"Enter the number :";
    cin>>m>>n;
    cout<<gCD(m,n);
    /*
    * NOTE here we can pass the m as greater number becoz in the recursive call n will become equal to m i.e
    * 3%6 = 3 then in next it will be 6%3..............
    
    */

    // we will be using the euclid division method here....
    //“The iterative Euclidean algorithm uses constant
    //  extra space, whereas the recursive version uses logarithmic space due to the recursion stack.”
return 0;
}