//mergsort  of two sorted array.
#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&arr1,vector<int>& arr2){
    int n = arr1.size();
    int m =  arr2.size();
    vector<int> res(m+n);
    int i =0; //arr1
    int j =0; //arr2
    int k =0; //res
    while (i<=n && j<=m)
    {
        if (arr1[i]<arr2[j])
        {
            res[k] = arr1[i];
            i++;
            k++;
        }else
        {
            res[k] = arr2[j];
            j++;
            k++;
        }
        
        
    }
    //for remaining
    if (i == n)
    {
        while (j<=n-1)
        {
            res[k] = arr2[j];
            k++;
            j++;
        }
        
    }
    if (j == n)
    {
        while (i<=n-1)
        {
            res[k] = arr1[i];
            i++;
            k++;
        }
        
    }
    
    return res;
    
}

// *note we can use reverse order filling in resultant matirix .....
// * this will help in filling elements in  one of the two array...given that size of the that array is m+n..  
int main()
{
    vector<int> arr1;
    arr1.push_back(4);
    arr1.push_back(6);
    arr1.push_back(12);
    arr1.push_back(15);
    arr1.push_back(20);
     for (int i = 0; i < arr1.size(); i++)
     {
        cout<<arr1[i]<<" ";
     }
       

    cout<<" ";
    vector<int>arr2;
    arr2.push_back(5);
    arr2.push_back(6);
    arr2.push_back(8);
    arr2.push_back(11);
    arr2.push_back(62);
    arr2.push_back(13);
     for (int i = 0; i < arr2.size(); i++)
     {
        cout<<arr2[i]<<" ";
     }

     cout<<endl;
     vector<int> v = merge(arr1,arr2);
      for (int i = 0; i < v.size(); i++)
     {
        cout<<v[i]<<" ";
     }
    
    

return 0;
}