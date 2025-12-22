//first negative number in every window of aize K.  using slidingWindow
#include<bits/stdc++.h>
using namespace std;

vector<int> negativeWindow(int arr[], int n, int k){  // still time commplexity is O(n).
    vector<int>v(n-k+1);
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < 0){
            idx = i;
            break;
        }
    }
    if(idx == -1) return v;
    int i = 0;
    int j =  k;
    while (j<=n)
    {
        if (idx >= i && idx < j)  v[i] = arr[idx];
        else{
            for (int p = i; p < n; p++)
            {
                if(p <= j && (arr[p] < 0)) {
                    idx = p;
                    v[i] = arr[p];
                    break;}
            //     else if(arr[p] < 0 && p> j)     check this later.
            //    { idx = p;
            //     j = p-1;
            //     i = j -k-1;}
            //     else return v;
                

            }
            
            
        }
        i++;
        j++;
    }
    return v;
    
}

int main()
{
    int arr[] ={2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int k; 
    cout<<"Enter the window size:";
    cin>>k;
    int s = n-k+1;
     vector<int>v(s);
    v = negativeWindow(arr,n,k);
    for (int i = 0; i < s; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
return 0;
}