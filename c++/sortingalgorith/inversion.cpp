#include<bits/stdc++.h>
using namespace std;
int coun  =  0;
int inversion(vector<int>&a , vector<int>&b){
    int count = 0;
    int i = 0;
    int j = 0;
    while (i<a.size() && j < b.size())
    {
        if(a[i] <= b[j]){
            i++;
        }else {
            count += (a.size() - i);
            j++;
        }
    }
   return count; 
}
void merge(vector<int> &a, vector<int> &b, vector<int> &resl){
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < a.size() && j < b.size())
    {
        if(a[i] <= b[j]) resl[k++] = a[i++];
        else resl[k++] = b[j++];
    }
    while(i<a.size()) resl[k++] = a[i++];
    while (j<b.size()) resl[k++] = b[j++];
}
void mergesort(vector<int> &v){
    int n = v.size();
    if(n <= 1) return;
    int n1 = n/2 ,n2 = n - n/2;
    vector<int> a(n1),b(n2);
    for (int i = 0; i < n1; i++) a[i] = v[i];
    for (int i = 0; i < n2; i++) b[i] = v[i+n1];
    mergesort(a);
    mergesort(b);
   coun += inversion(a,b);
     merge(a,b,v);
    a.clear();
    b.clear();
    
}
int main()
{
        int n;
    cout<<"Enter the number in the array:"; 
    cin>>n;
    vector<int> arr(n);
  
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   // int count = 0;
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i+1 ; j < n; j++)
    //     {
    //         if(arr[i] > arr[j])
    //         count++;
    //     }
        
    // }
    mergesort(arr);
    cout<<"Number of the inversion present in the array is :"<<coun<<endl;
    
return 0;
}