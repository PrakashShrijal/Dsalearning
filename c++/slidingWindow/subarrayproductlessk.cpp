// return no. of sub-array less than k.
#include<bits/stdc++.h>
using namespace std;
int subarrayProductLessThanK(vector<int>& v, int k) {
    if (k <= 1) return 0;

    long long product = 1;
    int i = 0;
    int count = 0;

    for (int j = 0; j < v.size(); j++) {
        product *= v[j];
 
        while (product >= k) {
            product /= v[i];
            i++;
        }

        count += (j - i + 1);
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the no of elements in the array:";
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int k;
    cout<<"Enter the product:";
    cin>>k;
    int result = subarrayProductLessThanK(v,k);
    cout<<result;
    
return 0;
}