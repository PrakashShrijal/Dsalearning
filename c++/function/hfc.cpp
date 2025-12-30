// hcf of two number
#include<bits/stdc++.h>
using namespace std;
int hcf(int n, int m){  // TC O(min(n,m));
    int k = min(n,m);
    int l = max(n,m);
    for (int i = k; i >=2; i--)
    {
        if (k % i == 0 && l % i== 0)
        {
            return i;
        }
        
    }
    return 1;
}
// efficient  TC - > O(log(min(n,m)));
int hfc1(int n, int m){
    while (m != 0)
    {
        int r = n%m;
        n = m;
        m = r;
    }
    return n;
}
int main()
{
    int n,m;
    cout<<"Enter the two number :";
    cin>>n>>m;
    int result = hfc1(n,m);
    cout<<result;
return 0;
}