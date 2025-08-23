// Implement the merge sort algorithm to sort an array of elements in decreasinng order............
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &resl){
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {
        if(a[i] >= b[j]) resl[k++] = a[i++];
        else resl[k++] = b[j++];
    }
    while(i<a.size()) resl[k++] = a[i++];
    while (j<b.size()) resl[k++] = b[j++];
    // if(i == a.size())while(j<b.size()) resl[k++] = b[j++];
    // if(j == b.size())while(i<a.size()) resl[k++] = a[i++];  unnecessay condition avoid this/.....
    
}
void mergesort(vector<int> &v){
    int n = v.size();
    if(n == 1) return;
    int n1 = n/2 ,n2 = n - n/2;
    vector<int> a(n1),b(n2);
    for (int i = 0; i < n1; i++) a[i] = v[i];
    
    for (int i = 0; i < n2; i++) b[i] = v[i+n1];
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
    a.clear();
    b.clear();
    
}
void display(vector<int> arr){
    int n = arr.size();
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
       
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Entere the nummber of elements in the vector:";
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    display(a);
    mergesort(a);
    display(a);
    
return 0;
}