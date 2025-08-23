#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    int pge[n];
    pge[0] = -1;
    stack<int> st;
    st.push(0);  // puttinng idx of first element
    for(int i = 1; i< n ; i++){
        while (st.size()>0 && arr[st.top()]<=arr[i])
        {
            st.pop();
        }
        if(st.size() == 0 ) pge[i] = -1;
        else pge[i] = st.top();
        st.push(i);
    }
        for(int i=0; i<n;i++){
            pge[i] = i-pge[i];
        }
        for(int i =0; i<n; i++){
            cout<<pge[i]<<" ";
        }
        cout<<endl;

    
return 0;
}