#include<bits/stdc++.h>
using namespace std;
int minimum_Product_Subset(vector<int> v){
    int n = v.size();
    int neg = 0;
    int z0s = 0;
    int min_Pos = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(v[i] < 0) neg++;
        if(v[i] == 0) z0s++;
        if(v[i] > 0) min_Pos = min(min_Pos,v[i]);

    }
    if(neg == 0){
        if(z0s == 0) return min_Pos;
        else return 0;
    }else{
        if(neg % 2 != 0){
            int mul = 1;
            for (int i = 0; i < n; i++)
            {
                if(v[i] < 0) mul *= v[i];
                if(v[i] > 0) mul *= v[i];
            }
            return mul; 
        }else{
            int maxneg = INT_MIN;;
            for (int i = 0; i < n; i++)
            {
                if(v[i] < 0) maxneg = max(maxneg,v[i]);
            }
            return maxneg;
        }
    }

}
int main()
{
    vector<int> v;
    int n;
     cout<<"Enter the nummbers in the vector:";
     cin>>n;

    cout<<"Enter elements in the vector:";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<minimum_Product_Subset(v);
    
return 0;
}