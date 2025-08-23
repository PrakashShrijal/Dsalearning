//sorting in one pass of 0s and 1s.
//using two pointers.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort0s1s(vector<int>&v){
   int n = v.size();
    int i = 0;
    int j = n -1;
   // for (int i = 0,j = n -1; i < j; i++,j--)
   while(i<=j)
    {//   1 0 1 1 0 0
        if (v[i] > v[j])
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
           i++;
           j--;
        }
       i++;
    }
    
}
void display(vector<int>&a){
   // for (int i = 0; i < a.size(); i++)
    for(int num : a)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
   cout<<"Enter the element as 0s and 1s only in unsorted manner:";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    sort0s1s(v);
    display(v);
  

return 0;
}