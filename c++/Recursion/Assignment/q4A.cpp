//refer q4
#include<bits/stdc++.h>
using namespace std;
void printLevel(vector<int> arr){
    int n = arr.size();
    while (n > 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<<" ";

            }
            cout<<endl;

            vector<int> next;
            for (int i = 0; i < n-1; i++)
            {
                next.push_back(arr[i] + arr[i+1]);
            }

            arr = next;
            n--;
        }
}
int main()
{
    int n;
    cout<<"Enter the no of elements in the array:";
    cin>> n;
    cout<<"Enter the elements in the array:";
  
    // taking input 
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

      printLevel(arr);  
        

return 0;
}