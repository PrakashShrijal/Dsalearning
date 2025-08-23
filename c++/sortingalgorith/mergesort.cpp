#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &result){
    int i = 0;
    int j = 0;
    int k = 0;
    while (i<a.size() && j<b.size())
    {
        if (a[i] <= b[j]) result[k++] = a[i++];   // <= makes it stable only < makes it unstable.
       else result[k++] = b[j++];
    }
    while(i<a.size()) result[k++] = a[i++];
    while (j<b.size()) result[k++] = b[j++];
    // if(i == a.size()) while(j<b.size()) result[k++] = b[j++];
    // if(j == b.size()) while(i<a.size()) result[k++] = a[i++];
}
//works on the principle of divide and conquer......
void mergesort(vector<int> &v){
    int n = v.size();
    if(n == 1) return;
    int n1 = n/2 , n2 = n - n/2;
    vector<int> a(n1), b(n2);
    //copyinng the elements in the divided array
    for (int  i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = v[i+n1];
    }
    mergesort(a);
    mergesort(b);   // T.C. -> O(nlogn)  


    merge(a,b,v);
    a.clear();
    b.clear();// we are deleting extra space creates while sorting. Doing this our space complexity will limit
            // to O(n) rather  than O(nlogn)...
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
//     int arr1[] = {3,5,8,9,15};
//     int n1 = sizeof(arr1)/sizeof(arr1[0]);
//     int arr2[] = {5,7,12,35,56,71,73,75,79,80};
//     int n2 = sizeof(arr2)/sizeof(arr2[0]);

//     vector<int> a(arr1,arr1+n1);// copying the arr1 to vector a
//     vector<int> b(arr2,arr2+n2);// copying the arr2 to vector b
//     vector<int> result(n1+n2);
//     merge(a,b,result);
//     display(result);

vector<int> a;
int n;
cout<<"Enter the number of elenets to be in vector :";
cin>>n;
for (int i = 0; i < n; i++)
{
    int x ;
    cin>>x;
    a.push_back(x);
}
mergesort(a);
display(a);

return 0;
}