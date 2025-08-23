#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3,1,2,7,4,6,2,3};
    for (int  i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    // using stack : pop ,ans ,push
    //SC = O(n) , TC = O(n);
    int nge[n];
    stack<int> st;
    nge[n-1] = -1;
    st.push(arr[n-1]);
    for(int i = n-2; i >=0;i--){
    //pop all the element smaller than arr[i]
    while (st.size() > 0 && st.top()<= arr[i])
    {
        st.pop();                          //pop
    }
    //mark the ans in nge array
    if(st.size() == 0)nge[i] = -1;        
    else nge[i] = st.top();               //ans
    //push the arr[i];
    st.push(arr[i]);                      // push
}
for(int i = 0 ; i< n ; i++){
    cout<<nge[i]<<" ";
}
    cout<<endl;
return 0;
}